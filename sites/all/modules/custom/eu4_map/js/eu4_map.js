/**
 * @file
 * Javascript for EU4 Map.
 */
 
(function ($) {
  Drupal.behaviors.eu4_map = {
    attach: function (context, settings) {
      /*
      $('#eu4_map', context)
      .zoomPanTouchSVG();*/
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
      
      /*$('map svg', context).live('mousedown', function(e) {
        if (e.which == 2) {
          // Store the initial value if not already stored.
          if ($(this).data('viewBox') == null) {
            $(this).data('viewBox', $(this).attr('viewBox'));
          }
          
          if ($(this).data('viewBox') == $(this).attr('viewBox')) {
            console.log('debug', $(this).data('viewBox'));
            $(this).setAttribute('viewBox', '0 0 ' + 200 + ' ' + 200);
          }
        }
        e.preventDefault();
      }).live('contextmenu', function(e){
        console.log('debug', e);
        //e.preventDefault();
      });*/
    }
  };
})(jQuery);