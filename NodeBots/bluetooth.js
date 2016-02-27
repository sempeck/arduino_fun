var five = require("johnny-five");

var board = new five.Board({
  port: "/dev/cu.Medioramowoz-DevB"
});

keypress = require('keypress');

board.on("ready", function() {
  console.log("Jedziemy!");  
///// led /////////////////////
    var led = new five.Led(13);
    this.repl.inject({
       led: led
    });
///////////////////////////////
var motor1 = new five.Motor({pins:[6,5],invertPWM:true}); 
var motor2 = new five.Motor({pins:[11,10], invertPWM:true});

keypress(process.stdin);

  function controller(ch, key) {
      if (key) {
        if (key.name === "space") {
          motor2.stop();
          motor1.stop();
        }
        if (key.name === "up") {
          motor2.forward(255);
          motor1.forward(255);
        }
        if (key.name === "down") {
          motor2.reverse(255);
          motor1.reverse(255);
        }
        if (key.name === "right") {
          motor2.reverse(255);
          motor1.forward(255);
        }
        if (key.name === "left") {
          motor1.reverse(255);
          motor2.forward(255);
        }
      }
    }

/////////////////////////////////////////////
  //   board.repl.inject({
  //   motor1: motor1,
  //   motor2: motor2
  // });

  // motor2.on("start", function() {
  //   console.log("start");
  // });

  // motor1.on("start", function() {
  //   console.log("start motor1");
  // });

  // motor2.on("stop", function() {
  //   console.log("stop motor2");
  // });

  // motor2.on("forward", function() {
  //   console.log("forward");
  // });

  // motor2.on("reverse", function() {
  //   console.log("reverse");
  // });

  // motor2.forward(255);
/////////////////////////////////////////////

  process.stdin.on('keypress', controller);

    process.stdin.setRawMode(true);
    process.stdin.resume();

});





