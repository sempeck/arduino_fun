var five = require("johnny-five"), 
    board = new five.Board();

board.on("ready", function() {

  var motor = new five.Motor([3, 12]);

  // Reverse the motor at maximum speed
  motor.reverse(255);

});