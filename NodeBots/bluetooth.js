var five = require("johnny-five");

var board = new five.Board({
  port: "/dev/cu.Medioramowoz-DevB"
});

board.on("ready", function() {
  console.log("Jedziemy!");  

    var led = new five.Led(13);

    this.repl.inject({
      
       led: led
       
      // on: function() {
      //   led.on();
      // },
      // off: function() {
      //   led.off();
      // }
    });


  // this.pinMode(13, this.MODES.OUTPUT);

  // this.loop(500, function() {
  //   this.digitalWrite(13, this.pins[13].value ? 0 : 1);
  // });
});





