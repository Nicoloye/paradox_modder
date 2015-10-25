/**
 * @file
 * Javascript for EU4 Map.
 */
 
(function ($) {
  Drupal.behaviors.eu4_map = {
    attach: function (context, settings) {
      
      if ($('#eu4_map', context).length) {
        var last_selected = $('#eu4_map g', context);
        
        $('#eu4_map g', context).click(function(){
          // If no toolbox is displayed, build one.
          $('#province_selector').remove();
          if ($(this).attr('selected') == 'selected') {
            $(this).parents('map').append('<div id="province_selector"></div>');
            var position = $(this).offset();
            $('#province_selector').css({
              position: 'absolute',
              left: position.left,
              top: position.top
            });
            
            // Load the drupal form.
            var id = $(this).attr('id');
            $('#province_selector').load(Drupal.settings.basePath + 'eu4-map/associate/province/' + id);
          }
          
          // Select the current path.
          last_selected.removeAttr('selected');
          $(this).attr('selected', 'selected');
          last_selected = $(this);
        });
        
        // Zoom and pan.
        var initial_viewBox = $('#eu4_map', context)[0].viewBox.baseVal;
        $('#eu4_map', context).svgPanZoom({
            animationTime: 0,
            zoomFactor: 0.25,
            maxZoom: 3,
            panFactor: 100,
            initialViewBox: {
              x: initial_viewBox.x,
              y: initial_viewBox.y,
              width: initial_viewBox.width,
              height: initial_viewBox.height
            },
            limits: {
                x: initial_viewBox.x,
                y: initial_viewBox.y,
                x2: initial_viewBox.width,
                y2: initial_viewBox.height
            }
        });
      }
    }
  };
})(jQuery);