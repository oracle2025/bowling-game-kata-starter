#include "doctest.h"

/*
 * The game consists of 10 frames. In each frame the player has two rolls to
 * knock down 10 pins. The score for the frame is the total number of pins
 * knocked down, plus bonuses for strikes and spares.
 *
 * A spare is when the player knocks down all 10 pins in two rolls. The
 * bonus for that frame is the number of pins knocked down by the next roll.
 *
 * A strike is when the player knocks down all 10 pins on his first roll.
 * The frame is then completed with a single roll. The bonus for that frame
 * is the value of the next two rolls.
 *
 * In the tenth frame a player who rolls a spare or strike is allowed to
 * roll the extra balls to complete the frame. However, no more than three
 * balls can be rolled in tenth frame.
 */

/*
 * Gutter Game: Roll zero 20 times
 * All Ones: Roll 1 20 times
 * One Spare: Roll 10 in one frame
 * One Strike: Roll 10
 * Perfect Game: Roll 10 12 times
 */

struct Game {
    void roll(int pins) {
    }
    int score() {
    }
};

TEST_CASE("Bowling Game") {
}