/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekaik-ne <ekaik-ne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 15:42:30 by ekaik-ne          #+#    #+#             */
/*   Updated: 2024/01/23 15:42:33 by ekaik-ne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Brain.hpp"

Brain::Brain()
{
	std::cout << PINK << "Brain default constructor called" << RESET << std::endl;

}

Brain::Brain(Brain &brain)
{
	std::cout << PINK << "Brain copy constructor called" << RESET << std::endl;
	*this = brain;
}

Brain &Brain::operator=(const Brain &brain)
{
	std::cout << PINK << "Brain copy assignment operator called" << RESET << std::endl;
	if (this != &brain)
		for (size_t i = 0; i < brain.ideas->length(); i++)
			this->ideas[i] = brain.ideas[i];		
	return *this;
}

Brain::~Brain() { std::cout << PINK << "Brain destructor called" << RESET << std::endl; }


int Brain::generateRandomNumber()
{
	static unsigned int random = 42;

	random = (random * 1103515245 + 12345) & 0x7FFFFFFF;

    return (random % 100);
}

void Brain::displayIdeias(int n, std::string type)
{
	std::cout << "This is the idea " << n << " for " << type << ": " << this->ideas[n] << std::endl; 
}

void Brain::createIdeas(std::string type)
{
	if (type == "Dog")
	{
		for (size_t i = 0; i < 100; i++)
		{
			switch (this->generateRandomNumber())
			{
				case 0:
					this->ideas[i] = "Hmm, will the food drop from the table today?";
					break;
				case 1:
					this->ideas[i] = "Run, play, repeat!";
					break;
				case 2:
					this->ideas[i] = "New smell! What could it be?";
					break;
				case 3:
					this->ideas[i] = "These humans talk so much... something about 'walk'?";
					break;
				case 4:
					this->ideas[i] = "Alone for so long... they're back! Joy!";
					break;
				case 5:
					this->ideas[i] = "Here comes the mailman! Intruder alert!";
					break;
				case 6:
					this->ideas[i] = "This toy is mine, mine, mine!";
					break;
				case 7:
					this->ideas[i] = "BBQ smell... maybe they'll give me a little piece?";
					break;
				case 8:
					this->ideas[i] = "I'm so tired... I'll nap here.";
					break;
				case 9:
					this->ideas[i] = "What if I dig a huge hole in the garden?";
					break;
				case 10:
					this->ideas[i] = "Love my human more than anything!";
					break;
				case 11:
					this->ideas[i] = "Will this cat play with me?";
					break;
				case 12:
					this->ideas[i] = "Water! I love water!";
					break;
				case 13:
					this->ideas[i] = "What's that sound? Walk alert!";
					break;
				case 14:
					this->ideas[i] = "Someone's at the door! Bark or wag my tail?";
					break;
				case 15:
					this->ideas[i] = "Mom and dad are happy today. Let's jump on them!";
					break;
				case 16:
					this->ideas[i] = "Mirror dog... when will you give me my bone?";
					break;
				case 17:
					this->ideas[i] = "This pillow is my new friend!";
					break;
				case 18:
					this->ideas[i] = "Need to protect the house... from birds!";
					break;
				case 19:
					this->ideas[i] = "What if I give them the puppy eyes? Treats incoming!";
					break;
				case 20:
					this->ideas[i] = "Rain again? Let's play in the mud!";
					break;
				case 21:
					this->ideas[i] = "Why does the cat have different food?";
					break;
				case 22:
					this->ideas[i] = "Flea! Is it my new friend or foe?";
					break;
				case 23:
					this->ideas[i] = "This ball is going to learn who's boss.";
					break;
				case 24:
					this->ideas[i] = "Visitor smell... better check it out!";
					break;
				case 25:
					this->ideas[i] = "I'm sleepy, but... squirrel!";
					break;
				case 26:
					this->ideas[i] = "Where did my favorite squeaky toy go?";
					break;
				case 27:
					this->ideas[i] = "Squirrel alert! Prepare for barking.";
					break;
				case 28:
					this->ideas[i] = "Blanket fort time! Humans can join too.";
					break;
				case 29:
					this->ideas[i] = "Cuddles, please! I'll give you puppy eyes.";
					break;
				case 30:
					this->ideas[i] = "Dreaming of endless treats and belly rubs.";
					break;
				case 31:
					this->ideas[i] = "Neighborhood patrol: the nightly adventure begins.";
					break;
				case 32:
					this->ideas[i] = "Car ride excitement: ears flapping, tongue out!";
					break;
				case 33:
					this->ideas[i] = "Sunbathing and contemplating the meaning of fetch.";
					break;
				case 34:
					this->ideas[i] = "If I stare long enough, the door will open.";
					break;
				case 35:
					this->ideas[i] = "Oh, the joy of rolling in grass and leaves!";
					break;
				case 36:
					this->ideas[i] = "Training humans: sit, stay, treat, repeat.";
					break;
				case 37:
					this->ideas[i] = "Bedtime ritual: find the perfect sleeping spot.";
					break;
				case 38:
					this->ideas[i] = "The cat stole my bed again. Sigh.";
					break;
				case 39:
					this->ideas[i] = "Frisbee time! My athleticism knows no bounds.";
					break;
				case 40:
					this->ideas[i] = "Chasing my tail because... why not?";
					break;
				case 41:
					this->ideas[i] = "Sniffing every inch of the walk. Detective mode!";
					break;
				case 42:
					this->ideas[i] = "That mysterious sound: is it a friend or foe?";
					break;
				case 43:
					this->ideas[i] = "Puppy playdate dreams: non-stop fun and games.";
					break;
				case 44:
					this->ideas[i] = "Trying to catch my own tail... almost got it!";
					break;
				case 45:
					this->ideas[i] = "Greet every new day with a tail wag.";
					break;
				case 46:
					this->ideas[i] = "The garden hose is my water fountain oasis.";
					break;
				case 47:
					this->ideas[i] = "Hooman's lap: the coziest place in the universe.";
					break;
				case 48:
					this->ideas[i] = "Hiding toys in secret places for later.";
					break;
				case 49:
					this->ideas[i] = "The smell of freshly baked cookies... for dogs.";
					break;
				case 50:
					this->ideas[i] = "Barking at the vacuum cleaner: sworn enemy.";
					break;
				case 51:
					this->ideas[i] = "Contemplating the deep philosophical question: who's a good boy?";
					break;
				case 52:
					this->ideas[i] = "Birdwatching: the ultimate canine pastime.";
					break;
				case 53:
					this->ideas[i] = "The eternal struggle: to share or not to share?";
					break;
				case 54:
					this->ideas[i] = "Loving my reflection in the water bowl.";
					break;
				case 55:
					this->ideas[i] = "Sunset strolls: nature's perfect playground.";
					break;
				case 56:
					this->ideas[i] = "Digging a hole to China... one paw at a time.";
					break;
				case 57:
					this->ideas[i] = "Zoomies unleashed! Living life in the fast lane.";
					break;
				case 58:
					this->ideas[i] = "Sneaking onto the bed when no one's looking.";
					break;
				case 59:
					this->ideas[i] = "Begging for table scraps: a timeless tradition.";
					break;
				case 60:
					this->ideas[i] = "Rainy days call for indoor hide-and-seek.";
					break;
				case 61:
					this->ideas[i] = "Trying to understand why the mailman always leaves.";
					break;
				case 62:
					this->ideas[i] = "Paw prints on the window: my abstract art installation.";
					break;
				case 63:
					this->ideas[i] = "Anticipating the magic words: 'wanna go for a walk?'";
					break;
				case 64:
					this->ideas[i] = "Sunrise serenade: announcing the start of a new day.";
					break;
				case 65:
					this->ideas[i] = "Guarding the garden from invisible invaders.";
					break;
				case 66:
					this->ideas[i] = "Burying treasures in the backyard for future discovery.";
					break;
				case 67:
					this->ideas[i] = "Every sock is a potential chew toy.";
					break;
				case 68:
					this->ideas[i] = "Puppy school flashbacks: I was the teacher's pet.";
					break;
				case 69:
					this->ideas[i] = "Balancing act: holding the tennis ball in my mouth.";
					break;
				case 70:
					this->ideas[i] = "Snuggling into freshly laundered blankets.";
					break;
				case 71:
					this->ideas[i] = "Puzzled by the concept of a 'no dogs allowed' sign.";
					break;
				case 72:
					this->ideas[i] = "Mirror, mirror on the wall... am I the fluffiest of them all?";
					break;
				case 73:
					this->ideas[i] = "Pondering the mysteries of the forbidden couch.";
					break;
				case 74:
					this->ideas[i] = "Epic battles with my own reflection in the mirror.";
					break;
				case 75:
					this->ideas[i] = "Chasing shadows: the never-ending game.";
					break;
				case 76:
					this->ideas[i] = "Napping strategically to maximize sunbeam exposure.";
					break;
				case 77:
					this->ideas[i] = "Contemplating the profound meaning behind the word 'fetch.'";
					break;
				case 78:
					this->ideas[i] = "Trying to eavesdrop on human conversations.";
					break;
				case 79:
					this->ideas[i] = "Exploring the backyard jungles for undiscovered treasures.";
					break;
				case 80:
					this->ideas[i] = "Sneaking a lick of peanut butter during sandwich making.";
					break;
				case 81:
					this->ideas[i] = "Learning the art of puppy eyes from the masters.";
					break;
				case 82:
					this->ideas[i] = "Waiting patiently for the ice cream truck jingle.";
					break;
				case 83:
					this->ideas[i] = "Plotting the perfect strategy for catching the tail.";
					break;
				case 84:
					this->ideas[i] = "Eagerly anticipating the sound of kibble hitting the bowl.";
					break;
				case 85:
					this->ideas[i] = "Finding the comfiest position for a long afternoon nap.";
					break;
				case 86:
					this->ideas[i] = "Investigating the mysterious crinkling sound in the kitchen.";
					break;
				case 87:
					this->ideas[i] = "Strategic nap planning: under the table or on the couch?";
					break;
				case 88:
					this->ideas[i] = "Trying to teach the human the art of 'throw and fetch.'";
					break;
				case 89:
					this->ideas[i] = "Daydreaming about the great squirrel chase of '09.";
					break;
				case 90:
					this->ideas[i] = "Decoding the secret language of neighborhood dogs.";
					break;
				case 91:
					this->ideas[i] = "Plotting a daring escape for an unsupervised backyard adventure.";
					break;
				case 92:	
					this->ideas[i] = "Contemplating life's big questions: bacon or sausage?";
					break;
				case 93:	
					this->ideas[i] = "Epic tug-of-war battles with the indestructible chew toy.";
					break;
				case 94:	
					this->ideas[i] = "Perfecting the art of the 'sad puppy eyes' for extra treats.";
					break;
				case 95:
					this->ideas[i] = "Guarding the door like a fearless defender of the realm.";
					break;
				case 96:	
					this->ideas[i] = "Celebrating the joyous reunion with a long-lost sock.";
					break;
				case 97:	
					this->ideas[i] = "Waking up the entire house with a sudden midnight howl.";
					break;
				case 98:	
					this->ideas[i] = "Practicing stealth mode: the silent approach to food begging.";
					break;
				case 99:	
					this->ideas[i] = "Reflecting on a day well spent: naps, walks, and belly rubs.";
					break;
			}
		}
	}
	else
	{
		for (size_t i = 0; i < 100; i++)
		{
			switch (this->generateRandomNumber())
			{
				case 0:
					this->ideas[i] = "Waiting until you're asleep to explore the kitchen counters.";
					break;
				case 1:
					this->ideas[i] = "Pawsitively curious about the strange noises in the night.";
					break;
				case 2:
					this->ideas[i] = "Claiming this sunbeam as my own personal throne.";
					break;
				case 3:
					this->ideas[i] = "Batting at imaginary foes with ninja precision.";
					break;
				case 4:
					this->ideas[i] = "Elegant stretching exercises: a feline specialty.";
					break;
				case 5:
					this->ideas[i] = "Judging you silently from the top of the bookshelf.";
					break;
				case 6:
					this->ideas[i] = "Plotting world domination one paw at a time.";
					break;
				case 7:
					this->ideas[i] = "Wishing for a window with an uninterrupted view of birds.";
					break;
				case 8:
					this->ideas[i] = "Secretly testing the hypothesis: gravity vs. fragile objects.";
					break;
				case 9:
					this->ideas[i] = "Contemplating the cosmic significance of the red dot.";
					break;
				case 10:
					this->ideas[i] = "Napping strategically on the clean laundry pile.";
					break;
				case 11:
					this->ideas[i] = "Ignoring you for precisely 17 minutes after being scolded.";
					break;
				case 12:
					this->ideas[i] = "Synchronized tail swishing with the neighbor's cat.";
					break;
				case 13:
					this->ideas[i] = "Purring as a form of passive-aggressive communication.";
					break;
				case 14:
					this->ideas[i] = "Claiming my territory on every available surface.";
					break;
				case 15:
					this->ideas[i] = "Mastering the art of the slow blink: a gesture of trust.";
					break;
				case 16:
					this->ideas[i] = "Surveying the kingdom from atop the refrigerator.";
					break;
				case 17:
					this->ideas[i] = "Pretending not to care, but secretly demanding attention.";
					break;
				case 18:
					this->ideas[i] = "Strategically knocking objects off shelves for fun.";
					break;
				case 19:
					this->ideas[i] = "Deciding whether to accept your affection or bite you.";
					break;
				case 20:
					this->ideas[i] = "The eternal quest for the elusive laser pointer dot.";
					break;
				case 21:
					this->ideas[i] = "Darting through the room at high speeds for no reason.";
					break;
				case 22:
					this->ideas[i] = "Sitting on your laptop because it's warm and cozy.";
					break;
				case 23:
					this->ideas[i] = "Dreaming of chasing mice in the field of endless yarn.";
					break;
				case 24:
					this->ideas[i] = "Pretending the vacuum cleaner is an alien invasion.";
					break;
				case 25:
					this->ideas[i] = "Sharpening my claws on the furniture: an art form.";
					break;
				case 26:
					this->ideas[i] = "Investigating the mysterious allure of cardboard boxes.";
					break;
				case 27:
					this->ideas[i] = "Leaving hairballs strategically placed around the house.";
					break;
				case 28:
					this->ideas[i] = "Contemplating the existential crisis of an empty food bowl.";
					break;
				case 29:
					this->ideas[i] = "Practicing the art of graceful leaps and acrobatics.";
					break;
				case 30:
					this->ideas[i] = "Deciding which family member is the chosen favorite today.";
					break;
				case 31:
					this->ideas[i] = "Stalking the unsuspecting toes under the bedcovers.";
					break;
				case 32:
					this->ideas[i] = "Pretending the dog's tail is an interactive plaything.";
					break;
				case 33:
					this->ideas[i] = "Judging the inferiority of store-bought versus homemade meals.";
					break;
				case 34:
					this->ideas[i] = "Sitting on the windowsill, judging the neighborhood.";
					break;
				case 35:
					this->ideas[i] = "Pawing at the door as if I truly want to go outside.";
					break;
				case 36:
					this->ideas[i] = "Wondering if knocking things off counters is an Olympic sport.";
					break;
				case 37:
					this->ideas[i] = "Indulging in a nap, because being adorable is exhausting.";
					break;
				case 38:
					this->ideas[i] = "Using my charm to get away with questionable behavior.";
					break;
				case 39:
					this->ideas[i] = "Making biscuits on the softest blanket in the house.";
					break;
				case 40:
					this->ideas[i] = "Gazing longingly at the forbidden realm of the kitchen counter.";
					break;
				case 41:
					this->ideas[i] = "Deciding whether today is a day for solitude or companionship.";
					break;
				case 42:
					this->ideas[i] = "Enforcing the 'no personal space' policy during cuddle time.";
					break;
				case 43:
					this->ideas[i] = "Batting at the water in the bowl as if it's a liquid adversary.";
					break;
				case 44:
					this->ideas[i] = "Hunting imaginary prey with unmatched feline stealth.";
					break;
				case 45:
					this->ideas[i] = "Admiring my reflection in the water dish as if it's a mirror.";
					break;
				case 46:
					this->ideas[i] = "Experimenting with the physics of knocking over cups.";
					break;
				case 47:
					this->ideas[i] = "Ignoring the expensive cat toys in favor of a crumpled receipt.";
					break;
				case 48:
					this->ideas[i] = "Convinced that your lap is the comfiest place on Earth.";
					break;
				case 49:
					this->ideas[i] = "Being aloof until you open a can of cat food—suddenly, a friend.";
					break;
				case 50:
					this->ideas[i] = "Deciding whether to sleep on the bed or on top of your face.";
					break;
				case 51:
					this->ideas[i] = "Sharpening claws on the furniture: a therapeutic exercise.";
					break;
				case 52:
					this->ideas[i] = "Greeting guests with an elegant tail flick and a disdainful stare.";
					break;
				case 53:
					this->ideas[i] = "Curling up in the sunniest spot like a solar-powered cat.";
					break;
				case 54:
					this->ideas[i] = "Considering the philosophical implications of knocking off a pen.";
					break;
				case 55:
					this->ideas[i] = "Inspecting the bottom of an empty food bowl in disbelief.";
					break;
				case 56:
					this->ideas[i] = "Napping strategically on your keyboard mid-email.";
					break;
				case 57:
					this->ideas[i] = "Lurking in the shadows, waiting for the perfect pounce.";
					break;
				case 58:
					this->ideas[i] = "Wondering why the red dot is the ultimate nemesis.";
					break;
				case 59:
					this->ideas[i] = "Contemplating the mysteries of life from the highest perch.";
					break;
				case 60:
					this->ideas[i] = "Silently plotting revenge for that last vet visit.";
					break;
				case 61:
					this->ideas[i] = "Experimenting with the art of sleeping in the oddest positions.";
					break;
				case 62:
					this->ideas[i] = "Deciding which cardboard box is the most regal throne.";
					break;
				case 63:
					this->ideas[i] = "Surveying the room with a level of disdain only a cat can muster.";
					break;
				case 64:
					this->ideas[i] = "Pretending not to notice the treat bag being opened.";
					break;
				case 65:
					this->ideas[i] = "Claiming the warm spot on the bed immediately after you get up.";
					break;
				case 66:
					this->ideas[i] = "Jumping at the sound of the doorbell as if it's an invasion.";
					break;
				case 67:
					this->ideas[i] = "Burying the toy mouse in the litter box as a form of art.";
					break;
				case 68:
					this->ideas[i] = "Dreaming of the perfect ambush location for unsuspecting ankles.";
					break;
				case 69:
					this->ideas[i] = "Silently judging the birds outside for their lack of grace.";
					break;
				case 70:
					this->ideas[i] = "Falling asleep in the middle of a grooming session.";
					break;
				case 71:
					this->ideas[i] = "Mastering the art of the 'I don't care' attitude.";
					break;
				case 72:
					this->ideas[i] = "Wishing the automatic feeder had a snooze button.";
					break;
				case 73:
					this->ideas[i] = "Pretending not to be impressed by the laser pointer anymore.";
					break;
				case 74:
					this->ideas[i] = "Inventing new and creative ways to demand breakfast.";
					break;
				case 75:
					this->ideas[i] = "Gazing into the void, contemplating the mysteries of nap time.";
					break;
				case 76:
					this->ideas[i] = "Sitting on the windowsill, imagining outdoor adventures.";
					break;
				case 77:
					this->ideas[i] = "Deciding if the dog is a playmate or an annoying sidekick.";
					break;
				case 78:
					this->ideas[i] = "Calculating the optimal time to demand late-night cuddles.";
					break;
				case 79:
					this->ideas[i] = "Playing hide-and-seek and pretending you can't see me.";
					break;
				case 80:
					this->ideas[i] = "Wondering if knocking over a vase will lead to more attention.";
					break;
				case 81:
					this->ideas[i] = "Pretending the laundry basket is my own personal spaceship.";
					break;
				case 82:
					this->ideas[i] = "Leaving a strategic trail of fur throughout the entire house.";
					break;
				case 83:
					this->ideas[i] = "Considering the philosophical implications of the red dot's elusiveness.";
					break;
				case 84:
					this->ideas[i] = "Deciding whether to participate in a grooming session or not.";
					break;
				case 85:
					this->ideas[i] = "Judging the quality of catnip with the utmost discernment.";
					break;
				case 86:
					this->ideas[i] = "Napping with one eye open to maintain constant vigilance.";
					break;
				case 87:
					this->ideas[i] = "Climbing the curtains for the thrill of defying gravity.";
					break;
				case 88:
					this->ideas[i] = "Dreaming of a world where hair ties are the currency.";
					break;
				case 89:
					this->ideas[i] = "Pretending not to be impressed by the singing birds outside.";
					break;
				case 90:
					this->ideas[i] = "Contemplating the purpose of the mysterious red dot.";
					break;
				case 91:
					this->ideas[i] = "Purring as a form of protest when the food dish is empty.";
					break;
				case 92:
					this->ideas[i] = "Hiding in the closet and pretending to be invisible.";
					break;
				case 93:
					this->ideas[i] = "Practicing the art of 'loafing' on the living room rug.";
					break;
				case 94:
					this->ideas[i] = "Blinking slowly to communicate profound affection.";
					break;
				case 95:
					this->ideas[i] = "Calculating the precise moment to pounce on an unsuspecting toy.";
					break;
				case 96:
					this->ideas[i] = "Napping strategically to maximize sunbeam exposure.";
					break;
				case 97:
					this->ideas[i] = "Surveying the kingdom from atop the highest bookshelf.";
					break;
				case 98:
					this->ideas[i] = "Deciding whether to nap in the sun or in the shade.";
					break;
				case 99:
					this->ideas[i] = "Pretending not to notice the dog's attempts at friendship.";
					break;
			}
		}		
	}
}
