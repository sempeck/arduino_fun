
var five = require("johnny-five"),
    board = new five.Board({
      port: "/dev/cu.Medioramowoz-DevB"
    }),
    keypress = require('keypress');

  board.on("ready", function() {

    keypress(process.stdin);

    var led = new five.Led(13);  // MOJE

    function controller(ch, key) {
      if (key) {
        if (key.name === "space") {
          
        }
        if (key.name === "up") {
          led.on();
           
        }
        if (key.name === "down") {
          led.off();
           
        }
        if (key.name === "right") {
           
        }
        if (key.name === "left") {
           
        }
      }
    }

    process.stdin.on('keypress', controller);

    process.stdin.setRawMode(true);
    process.stdin.resume();

  });
