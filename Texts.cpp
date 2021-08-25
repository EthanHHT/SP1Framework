#include "Texts.h"

Texts::Texts(void)
{
}

std::string* Texts::CallTexts(std::string Calltext, int Action, int Prog)
{
	static std::string texts[15];
	int i;

	for (i = 0; i < 15; i++) //init the string array with blank sentences
	{
		texts[i] = "";
	}

	// Bus captain texts
	if (Calltext == "BC")
	{
		if (Action == 0)
		{
			texts[0] = "As you reach for your bottle of petrol and";
			texts[1] = "lighter, you feel a great pain in your neck.";
			texts[2] = "Before you knew it, that bottle of petrol was now";
			texts[3] = "in Mr Pavel's hands.\"Try again, liberal scum\",";
			texts[4] = "he taunted, after his flawless execution of";
			texts[5] = "Secret Soviet Hand-to-Hand";
			texts[6] = "Combat Technique No. 9.";
		}

		else if (Action == 1)
		{
			texts[0] = "After flipping two birds at Mr Pavel,";
			texts[1] = "a pair of veins popped from his almost";
			texts[2] = "reflective forehead and his stare of death";
			texts[3] = "that came shortly after sent more than a few";
			texts[4] = "shivers down your spine. As you fell back in";
			texts[5] = "fear, you hit your head unknowingly,";
			texts[6] = "and probably picked up a slight concussion.";
		}

		else if (Action == 2)
		{
			texts[0] = "Your carefully calculated fist was a futile effort";
			texts[1] = "to strike fear into the heart of a man who had";
			texts[2] = "experienced the horrors of war ever since";
			texts[3] = "he was an infant. Mr Pavel chuckled as";
			texts[4] = "you retracted your fist and";
			texts[5] = "he replied with a strong right hook";
			texts[6] = "that almost sent you to dreamland.";
		}

		else if (Action == 3)
		{
			texts[0] = "After using a can of pepper spray on Mr Pavel,";
			texts[1] = "you looked up to see that he had blocked it all";
			texts[2] = "using his palms. After performing Secret Soviet";
			texts[3] = "Defense Technique No. 3 against your attack,";
			texts[4] = "he countered again by using his hands to fling";
			texts[5] = "some of that nasty fluid into your eyes,";
			texts[6] = "temporarily blinding you.";
		}

		else if (Action == 4)
		{
			texts[0] = "After hitting Mr Pavel's cheek with a slap";
			texts[1] = "at the speed of sound, he was stunned for";
			texts[2] = "a few moments, before collecting himself";
			texts[3] = "and responding with a slap of his own that";
			texts[4] = "seemed to be at the speed of light.";
		}

		else if (Action == 5)
		{
			texts[0] = "You decided to give Mr Pavel some cash after";
			texts[1] = "recalling his Wangan addiction.";
			texts[2] = "After giving him some cash, he looked over at you,";
			texts[3] = "teary-eyed, then thanked you profusely.";
			texts[4] = "\"T-t-thank you very much, my comrade";
			texts[5] = "I will remember you until I die!\", he exclaimed.";
		}

		else if (Action == 6)
		{
			texts[0] = "You recalled Mr Pavel's love for the former";
			texts[1] = "Soviet Union and proceeded to talk about";
			texts[2] = "its superiority compared to the USA and";
			texts[3] = "the rest of Europe.";
			texts[4] = "After hearing your opinion on the USSR,";
			texts[5] = "Mr Pavel stamped his foot, and in doing so,";
			texts[6] = "nearly shattered the ground. He then gave you";
			texts[7] = "an emphatic salute as a sign of respect.";
		}

		else if (Action == 7)
		{
			texts[0] = "You chatted with Mr Pavel about various topics";
			texts[1] = "such as the fall of the Soviet Union,";
			texts[2] = "his addiction to Wangan and got to listen to him";
			texts[3] = "talk about his love for his bus captain job.";
			texts[4] = "Mr Pavel appreciated the meaningful chat";
			texts[5] = "and shook your hand afterwards.";
		}

		else if (Action == 8)
		{
			texts[0] = "Knowing that winning a physical fight against him";
			texts[1] = "was a virtually impossible feat, you decided to";
			texts[2] = "lay a verbal smackdown upon Mr Pavel.";
			texts[3] = "You mentioned brutally shameful facts about";
			texts[4] = "the USSR as well as his lousy bus captain job.";
			texts[5] = "Feeling dejected by your verbal onslaught,";
			texts[6] = "Mr Pavel looked to the ground in shame and defeat.";
		}

		else if (Action == 9)
		{
			texts[0] = "Knowing Mr Pavel's rather lonely lifestyle,";
			texts[1] = "you promised to introduce him to a few girls";
			texts[2] = "you knew from school the next time you both met.";
			texts[3] = "His eyes sparkled after hearing the news and";
			texts[4] = "he looked like a man that had just seen god.";
		}

		else if (Action == 10)
		{
			texts[0] = "In an act of \"self-defense\", you splashed a large";
			texts[1] = "amount of petrol on Mr Pavel, to which he quipped";
			texts[2] = "back with, \"Thanks for the drink, comrade!\"";
		}

		else if (Action == 11)
		{
			texts[0] = "\"Haha! Funny pose!\", Mr Pavel chuckled, after";
			texts[1] = "seeing your stance.";
		}

		else if (Action == 12)
		{
			texts[0] = "As you pulled your phone out from your pocket";
			texts[1] = "and gave him a thinly veiled threat,";
			texts[2] = "Mr Pavel responded by saying,";
			texts[3] = "\"Go on, call them. They can't unassault you.\"";
		}

		else if (Action == 13)
		{
			texts[0] = "\"How do you know about Secret Soviet";
			texts[1] = "Defense Technique No. 8?\",";
			texts[2] = "Mr Pavel said in shock as he saw the infant";
			texts[3] = "strapped to your chest.";
		}

		else if (Action == 14)
		{
			texts[0] = "You prepare yourself mentally, and physically,";
			texts[1] = "for a strike from Mr Pavel.";
		}

		else if (Action == 15)
		{
			texts[0] = "Mr Pavel could sense the determination and fire";
			texts[1] = "in your eyes and stared right back at you along";
			texts[2] = "with a grin across his face.";
		}

		else if (Action == 16)
		{
			texts[0] = "\"Running back to mummy ?\", Mr Pavel said,";
			texts[1] = "followed by a loud burst of laughter.";
		}

		else if (Action == 17)
		{
			texts[0] = "\"Ummm... I am still standing here, you know...\",";
			texts[1] = "Mr Pavel awkwardly said, as I held my phone up to";
			texts[2] = "as I held my phone up to my ear.";
		}

		else if (Action == 18)
		{
			texts[0] = "\"Tsk. Kid these days...\", Mr Pavel remarked as he";
			texts[1] = "stared at me.";
		}

		else if (Action == 19)
		{
			texts[0] = "After seeing you put up your phone in such a";
			texts[1] = "position, Mr Pavel couldn't resist the";
			texts[2] = "opportunity for a quick photo with you.";
		}

		else if (Action == 20)//bus captain intro
		{
			texts[0] = "Here is your friendly neighbourhood bus captain,";
			texts[1] = "Mr Pavel. Back when he was Sergeant Pavel,";
			texts[2] = "he used to drive tanks in the old Soviet Army.";
			texts[3] = "On his off days, you can find him at the arcade,";
			texts[4] = "playing Wangan into the early hours of the day.";
			texts[5] = "His personal motto is,";
			texts[6] = "\"In Soviet Russia, bus captain assault YOU.\"";
		}

		else if (Action == 21)// bus captain end
		{
			texts[0] = "\"Well that was fun... Until next time,";
			texts[1] = "little boy.\", Mr Pavel said as he waved goodbye,";
			texts[2] = "before driving off in a hurry.";
		}
	}

	// Auntie texts
	if (Calltext == "Au")
	{
		if (Action == 0)
		{
			texts[0] = "Before the bottle could even leave your hands,";
			texts[1] = "Linlin managed to put you into her signature";
			texts[2] = "reverse arm bar. On the brink of passing out, you";
			texts[3] = "tapped out and she released her hold.";
		}

		else if (Action == 1)
		{
			texts[0] = "After flipping a pair of birds at Linlin, she";
			texts[1] = "responded in kind with a promo so devastating,";
			texts[2] = "you dropped to your knees in shame.";
		}

		else if (Action == 2)
		{
			texts[0] = "You made a fake punch that would have shocked most";
			texts[1] = "people Linlin's age to death but since Linlin";
			texts[2] = "wasn't most people her age, she responded with a";
			texts[3] = "forearm strike that knocked you off your feet.";
		}

		else if (Action == 3)
		{
			texts[0] = "As you unloaded a flurry of pepper spray onto her,";
			texts[1] = "your efforts were in vain as she shielded herself";
			texts[2] = "with a steel chair that she somehow had with her.";
			texts[3] = "In response to your attack, she clattered you";
			texts[4] = "with a chair shot so brutal, even Mick Foley would";
			texts[5] = "cry out in pain.";
		}

		else if (Action == 4)
		{
			texts[0] = "Your attempt at a slap ACTUALLY managed to connect";
			texts[1] = "with her old, wrinkly face. After the initial";
			texts[2] = "contact, the next thing you felt was her old,";
			texts[3] = "wrinkly hand hitting your face in response.";
		}

		else if (Action == 5)
		{
			texts[0] = "Being the good person you supposedly are, you gave";
			texts[1] = "some of your allowance to Linlin. After doing so,";
			texts[2] = "she thanked you profusely, explaining how much the";
			texts[3] = "money meant to her retirement fund.";
		}

		else if (Action == 6)
		{
			texts[0] = "Due to your somewhat extensive knowledge about";
			texts[1] = "professional wrestling, you started to chat with";
			texts[2] = "Linlin about how much more successful her career";
			texts[3] = "career would have been if not for Japanese beauty";
			texts[4] = "standards. \"Never heard anything more true in my";
			texts[5] = "miserable life!\", she replied.";
		}

		else if (Action == 7)
		{
			texts[0] = "You had a chat with Linlin about various topics,";
			texts[1] = "ranging from her somewhat decent wrestling career";
			texts[2] = "to what type of candy children like nowadays.";
			texts[3] = "After a meaningful discussion, Linlin expressed";
			texts[4] = "gratitude to you for listening to her rambling.";
		}

		else if (Action == 8)
		{
			texts[0] = "Going with this plan of action to verbally crush";
			texts[1] = "Linlin's spirit, you decided to launch a verbal";
			texts[2] = "assault against this old woman. However, once your";
			texts[3] = "insults seemed to be actually hurting her, she hit";
			texts[4] = "you with a devastating slap that prematurely ended";
			texts[5] = "your smack talk. She then went on, to talk about";
			texts[6] = "pro wrestlers nowadays being too overrated, spoilt";
			texts[7] = "and whatnot. Well, at least she looks like she got";
			texts[8] = "a load off her mind.";
		}

		else if (Action == 9)
		{
			texts[0] = "You got yourself to say many naughty things that";
			texts[1] = "you would like to do to Linlin's old wrinkly body";
			texts[2] = "and once you ended your speech with how much the";
			texts[3] = "both of you would be perfect as an item, Linlin";
			texts[4] = "handed you a note with a phone number, which was";
			texts[5] = "probably hers, on it...";
		}

		else if (Action == 10)
		{
			texts[0] = "*sniff sniff*";
			texts[1] = "\"Reminds me of those death matches those crazy";
			texts[2] = "Japanese bookers tried to get me to fight in...\",";
			texts[3] = "Linlin said, in response to the smell of gasoline.";
		}

		else if (Action == 11)
		{
			texts[0] = "\"Nice technique, haven’t seen that pose in a long";
			texts[1] = "time...\", Linlin said.";
		}

		else if (Action == 12)
		{
			texts[0] = "\"Don't worry, I'm just a has-been wrestler...";
			texts[1] = "I couldn't even hurt you if I tried...\",";
			texts[2] = "Linlin said hesitantly, replying to your threat.";
		}

		else if (Action == 13)
		{
			texts[0] = "\"What type of sick human being are you?\",";
			texts[1] = "Linlin said in disgust.";
		}

		else if (Action == 14)
		{
			texts[0] = "\"You may think you can dodge like a butterfly but";
			texts[1] = "I assure you, I can sting like a bee.\",";
			texts[2] = "Linlin said in response to your fancy footwork.";
		}

		else if (Action == 15)
		{
			texts[0] = "Flustered by such a younger man staring at her,";
			texts[1] = "Linlin looked away red-faced.";
		}

		else if (Action == 16)
		{
			texts[0] = "You backed off and drew a puzzled look from";
			texts[1] = "Linlin's face at first but she paid it no mind and";
			texts[2] = "went on with her own business.";
		}

		else if (Action == 17)
		{
			texts[0] = "\"Making a call?\", said a smiling Linlin.";
		}

		else if (Action == 18)
		{
			texts[0] = "\"Tsk. Kids these days...\", Linlin remarked, as";
			texts[1] = "you played around with your phone.";
		}

		else if (Action == 19)
		{
			texts[0] = "After signalling for a selfie together, Linlin";
			texts[1] = "happily obliged for a few.";
		}

		else if (Action == 20) // auntie intro
		{
			texts[0] = "Say hello to your resident neighbourhood auntie,";
			texts[1] = "Linlin. Her hobbies include mastering the use of";
			texts[2] = "\"What-Apps\" and chatting with young children.";
			texts[3] = "Back in her youth, she used to work for various";
			texts[4] = "wrestling promotions in Japan under the ring name";
			texts[5] = "\"Charlotte\". Beware, for old age is no hindrance";
			texts[6] = "for this old lady's reflexes.";
		}

		else if (Action == 21) // auntie end
		{
			texts[0] = "After spotting a small child in the distance,";
			texts[1] = "she smiled and said, \"Thanks for the time, dear.";
			texts[2] = "Remember to not talk to strangers or take candy";
			texts[3] = "from them.\", before heading the other way.";
		}
	}

	// Colleague texts
	if (Calltext == "Co")
	{
		if (Action == 0)
		{
			texts[0] = "\"Woah woah! Take it easy man! I swear to god!";
			texts[1] = "It wasn't my fault we had to do OT yesterday!\",";
			texts[2] = "Jon said as he tried to get you to put away the";
			texts[3] = "bottle of gasoline in your hand.";
		}

		else if (Action == 1)
		{
			texts[0] = "Thinking you were pulling a prank on him, Jon";
			texts[1] = "hesitantly flipped the bird right back at you.";
		}

		else if (Action == 2)
		{
			texts[0] = "Your fake punch caused Jon to flinch back in fear";
			texts[1] = "of his teeth getting knocked out(again) and by the";
			texts[2] = "time your fist was fully retracted, he had fallen";
			texts[3] = "back about 10 feet from where he originally was.";
		}

		else if (Action == 3)
		{
			texts[0] = "\"AHHH!!!! MY EYESSS!!!\", Jon screamed in agony,";
			texts[1] = "\"What the hell is wrong with you today?\"";
		}

		else if (Action == 4)
		{
			texts[0] = "Your slap, although average in strength, almost";
			texts[1] = "knocked Jon out clean and when he got back to his";
			texts[2] = "feet, his face had an expression that said:";
			texts[3] = "\"What the hell, man ? \"";
		}

		else if (Action == 5)
		{
			texts[0] = "You offered to treat Jon to a round of drinks at";
			texts[1] = "the neighbourhood bar after today's work and his";
			texts[2] = "response to your offer was an emphatic \"Nice!\",";
			texts[3] = "but was followed by a puzzled \"But what for?\"";
		}

		else if (Action == 6)
		{
			texts[0] = "You spent the next 5 minutes praising Jon's rather";
			texts[1] = "mediocre work ethic and his even less outstanding";
			texts[2] = "work quality but he managed to read between the";
			texts[3] = "lines and only flashed a grin back at you.";
		}

		else if (Action == 7)
		{
			texts[0] = "You chatted with Jon about his hobbies and his";
			texts[1] = "love for cats but for most of the conversation,";
			texts[2] = "you were the one talking. Looks as though it'll be";
			texts[3] = "a long time before you two become best buddies...";
		}

		else if (Action == 8)
		{
			texts[0] = "With a freestyle rap, you lyrically trashed Jon's";
			texts[1] = "incompetent work quality as well as his lazy work";
			texts[2] = "ethic. After a showcase of your lyrical genius,";
			texts[3] = "Jon responded in kind with a freestyle that";
			texts[4] = "trashed your equally low work quality and";
			texts[5] = "similarly poor work ethic. After the rap battle";
			texts[6] = "ended, it looked as though he managed to get a";
			texts[7] = "load of his mind so he smiled in tandem with you.";
		}

		else if (Action == 9)
		{
			texts[0] = "Knowing about Jon's frequent patronage at the";
			texts[1] = "local cat cafe, you made a promise to Jon that";
			texts[2] = "you'd introduce him to the cafe's female workers,";
			texts[3] = "to which he responded with a Cheshire Cat smile.";
		}

		else if (Action == 10)
		{
			texts[0] = "\"Woah, what the hell is this?! Reminds me";
			texts[1] = "of that club back in college...\", quipped Jon.";
		}

		else if (Action == 11)
		{
			texts[0] = "Intrigued by your pose, Jon responded with,";
			texts[1] = "\"I know Kung Fu!\", in an Asian accent.";
		}

		else if (Action == 12)
		{
			texts[0] = "\"Ok ok man, I fess up! I may or may not have used";
			texts[1] = "some of the company money for drinks before...\",";
			texts[2] = "Jon said fearfully.";
		}

		else if (Action == 13)
		{
			texts[0] = "\"Holy hell dude!";
			texts[1] = "What kind of a sick f*ck are you?!\",";
			texts[2] = "Jon shouted in disgust.";
		}

		else if (Action == 14)
		{
			texts[0] = "In response to your footwork, Jon made an attempt";
			texts[1] = "to copy your actions but ended up falling flat on";
			texts[2] = "his face.";
		}

		else if (Action == 15)
		{
			texts[0] = "Taking it as though you were joking with him,";
			texts[1] = "Jon stared back at you with his eyes crossed.";
		}

		else if (Action == 16)
		{
			texts[0] = "As you slowly walked backwards, Jon looked";
			texts[1] = "puzzled. In response, he performed a horrible";
			texts[2] = "version of a moonwalk.";
		}

		else if (Action == 17)
		{
			texts[0] = "\"Oh, don't worry, I won't bother you.\",";
			texts[1] = "Jon said, in response to you raising your phone";
			texts[2] = "up to your ear.";
		}

		else if (Action == 18)
		{
			texts[0] = "\"You play Master Coin too?\", Jon said as he tried";
			texts[1] = "to get a peek at what was on your phone's screen.";
			texts[2] = "\"Oh shucks, you don't.\"";
		}

		else if (Action == 19)
		{
			texts[0] = "Your decision to take a selfie with Jon was well";
			texts[1] = "received as he got you to take a few selfies with";
			texts[2] = "him and he even asked you to send him all of them";
			texts[3] = "via Instagram.";
		}

		else if (Action == 20)
		{
			texts[0] = "Who's this? It's none other than Jon, your pal";
			texts[1] = "from work, taking a short san check before he";
			texts[2] = "heads to work. He's easygoing but isn't really the";
			texts[3] = "sharpest tool in the shed but at least he can";
			texts[4] = "carry his weight. He also has a soft spot for fat,";
			texts[5] = "orange cats.";
		}

		else if (Action == 21)
		{
			texts[0] = "\"It was fun hanging around with you for a bit.";
			texts[1] = "Oh crap, I'm gonna be late! See you at work,";
			texts[2] = "you should hurry up too!\", Jon said as he";
			texts[3] = "ran off in the opposite direction of the office.";
		}
	}

	// Cyclist texts
	if (Calltext == "Cy")
	{
		if (Action == 0)
		{
			texts[0] = "You threw a molotov cocktail right at Mr Phillips";
			texts[1] = "but he managed to dodge it using his bike.";
		}

		else if (Action == 1)
		{
			texts[0] = "Your gesture was not well received by him, as he";
			texts[1] = "barked back with several four-letter words.";
		}

		else if (Action == 2)
		{
			texts[0] = "As you tried to hit him with your weapon of";
			texts[1] = "no-destruction, Mr Phillips cycled around you in";
			texts[2] = "circles, narrowly avoiding your feints.";
		}

		else if (Action == 3)
		{
			texts[0] = "Unloading pepper spray on Mr Phillips proved to be";
			texts[1] = "ineffective as he would continuously dodge your";
			texts[2] = "shots with his bike.";
		}

		else if (Action == 4)
		{
			texts[0] = "Due to his lightning quick reflexes, the result of";
			texts[1] = "years of cycling on public highways, he managed";
			texts[2] = "to dodge your attempts at a slap.";
		}

		else if (Action == 5)
		{
			texts[0] = "You decided to bribe your way through Mr Phillips";
			texts[1] = "but he palmed away your donations, claiming that";
			texts[2] = "he already had enough money from insurance claims.";
		}

		else if (Action == 6)
		{
			texts[0] = "You decided to talk up Mr Phillips' efforts in";
			texts[1] = "pushing for more cyclists on roads and less";
			texts[2] = "automobiles on them but instead of listening to";
			texts[3] = "your fanboying, he took over the conversation to";
			texts[4] = "boast about his cycling skills.";
		}

		else if (Action == 7)
		{
			texts[0] = "You tried to be friendly with Mr Phillips but he";
			texts[1] = "rejected your friendly advances as he knew that";
			texts[2] = "your parents used to own a car.";
		}

		else if (Action == 8)
		{
			texts[0] = "You insulted Mr Phillips about his pitiful";
			texts[1] = "lifestyle as well as his fragile and skeletal";
			texts[2] = "figure. He ignored all your harsh comments and";
			texts[3] = "continued cycling about you.";
		}

		else if (Action == 9)
		{
			texts[0] = "You offered to introduce a few potential young";
			texts[1] = "wives to Mr Phillips but he firmly rejected your";
			texts[2] = "offer and proceeded to tell you about how much";
			texts[3] = "he loved and loved and loved and loved and loved";
			texts[4] = "and loved his bike while sensually riding it.";
		}

		else if (Action == 10)
		{
			texts[0] = "\"You think this scares me? I can't even remember";
			texts[1] = "the number of times I've been set on fire during";
			texts[2] = "accidents!\", Mr Phillips said while laughing.";
		}

		else if (Action == 11)
		{
			texts[0] = "\"Nice pose, car-lover!\",";
			texts[1] = "Mr Phillips said in response to your stance.";
		}

		else if (Action == 12)
		{
			texts[0] = "\"The police can't stop me! I don't need to live by";
			texts[1] = "those stupid speed limits they set!\",";
			texts[2] = "Mr Phillips nervously retorted.";
		}

		else if (Action == 13)
		{
			texts[0] = "\"In my decades of cycling, I've seen broken bones,";
			texts[1] = "severe road rash and even dead animals. But you...";
			texts[2] = "you are a disgrace to humankind!\", Mr Phillips";
			texts[3] = "disgustedly said in response to my meat shield.";
		}

		else if (Action == 14)
		{
			texts[0] = "\"Nice moves, why don't I show you how to avoid";
			texts[1] = "being crushed by a semi-truck?\", Mr Phillips said,";
			texts[2] = "amused by my footwork.";
		}

		else if (Action == 15)
		{
			texts[0] = "Your staring barely fazed Mr Phillips as he rode";
			texts[1] = "in circles around you.";
		}

		else if (Action == 16)
		{
			texts[0] = "You slowly backed off from Mr Phillips and, being";
			texts[1] = "the weird man he was, he rode closer towards you";
			texts[2] = "with a wry smile across his face.";
		}

		else if (Action == 17)
		{
			texts[0] = "\"Gonna call the cops? Go ahead!";
			texts[1] = "I know the law, I can ride wherever I want!\",";
			texts[2] = "Mr Phillips said, while laughing hysterically.";
		}

		else if (Action == 18)
		{
			texts[0] = "Mr Phillips, wanting to recapture your attention,";
			texts[1] = "performed a multitude of stunts to try to do so.";
		}

		else if (Action == 19)
		{
			texts[0] = "You decided to take a selfie with old Mr Phillips";
			texts[1] = "but he rode around you, avoiding the view of your";
			texts[2] = "phone, lest he goes viral once again.";
		}
		
		else if (Action == 20) // cyclist intro
		{
			texts[0] = "Oh no, it's your unfriendly neighbourhood cycling";
			texts[1] = "junkie, Mr Phillips. His body is now held together";
			texts[2] = "by sheer willpower after numerous accidents which";
			texts[3] = "mostly came from his insistence on cycling on";
			texts[4] = "public roads instead of pavements. He likes to";
			texts[5] = "rant on online forums about why bicycles are";
			texts[6] = "superior to automobiles and why he deserves to";
			texts[7] = "hog road lanes. He has been blacklisted by several";
			texts[8] = "insurance companies as a result of his almost";
			texts[9] = "willing attitude to get into accidents while";
			texts[10] = "riding his bike.";
		}

		else if (Action == 21)
		{
		texts[0] = "As Mr Phillips tries to mount one last offensive";
		texts[1] = "on you, he coughs up blood once again. He stares";
		texts[2] = "you down as he falls to his knees. Bruised all";
		texts[3] = "over, he raises a hand to you. You step forward";
		texts[4] = "and shake his hand, with him acknowledging your";
		texts[5] = "victory after such a ferocious battle.";
		}

		//to get the texts for cyclist since his progress is linear(10% each turn)
		int a = 0;
		while(a < 15)
		{
			if (texts[a] == "")
			{
				texts[a] = ".";
				texts[a+1] = "..";
				texts[a+2] = "...";
				break;
			}
			a++;
		}
		
		if (Prog == 0)
		{
			texts[a + 3] = "After seeing a few cars pass by, he tries to make";
			texts[a + 4] = "chase for them on his bike. You hurl a rock at him";
			texts[a + 5] = "to stop his pursuit and succeed. He's knocked off";
			texts[a + 6] = "his bike and reopens a few old wounds. With his";
			texts[a + 7] = "anger now directed at you, he throws his water";
			texts[a + 8] = "bottle right at you.";
		}

		if (Prog == 10)
		{
			texts[a + 3] = "Mr Phillips, bleeding, rips off the bell on";
			texts[a + 4] = "his beloved bike to throw it right at you.";
		}

		if (Prog == 20)
		{
			texts[a + 3] = "On his bike and raring to go, he taunts you,";
			texts[a + 4] = "prompting you to charge at him but right before";
			texts[a + 5] = "you get to hit him, he moves out of the way,";
			texts[a + 6] = "tripping you in the process. As you get back to";
			texts[a + 7] = "your feet, he laughs at you, before coughing up";
			texts[a + 8] = "blood from his mouth.";
		}

		if (Prog == 30)
		{
			texts[a + 3] = "Still going strong, this time, Mr Phillips charges";
			texts[a + 4] = "right at you while doing a wheelie. To avoid a";
			texts[a + 5] = "head-on collision, you palm away his front wheel";
			texts[a + 6] = "in a desperate attempt to stop his assault. You";
			texts[a + 7] = "succeed, but your wrists take damage in doing so.";
		}

		if (Prog == 40)
		{
			texts[a + 3] = "Looking slightly pale now, Mr Phillips reaches";
			texts[a + 4] = "into the small toolbox strapped to his bike and";
			texts[a + 5] = "pulls out a screwdriver to launch at you.";
		}

		if (Prog == 50)
		{
			texts[a + 3] = "In desperation, Mr Phillips charges at you once";
			texts[a + 4] = "again but you jump away to avoid his attack and";
			texts[a + 5] = "send him crashing onto the ground.Your dodge was";
			texts[a + 6] = "successful but you may have hurt yourself when";
			texts[a + 7] = "landing on the ground. Mr Phillips also quickly";
			texts[a + 8] = "gets back up and on his bike with his shirt";
			texts[a + 9] = "looking even bloodier now.";
		}

		if (Prog == 60)
		{
			texts[a + 3] = "With both of you looking groggy, he taunts you";
			texts[a + 4] = "once more. You choose to wait for his attack so he";
			texts[a + 5] = "obliges, charging you again. You try an outrageous";
			texts[a + 6] = "flying dropkick in response to his offense. He's";
			texts[a + 7] = "thrown off balance and hits the ground in pain.";
			texts[a + 8] = "You land up no better, landing on your back after";
			texts[a + 9] = "your showcase of athleticism.";
		}

		if (Prog == 70)
		{
			texts[a + 3] = "Mr Phillips, face white as a sheet, rides his bike";
			texts[a + 4] = "unsteadily. Without warning, he speeds at you with";
			texts[a + 5] = "his leg out. You too charge towards him. Once the";
			texts[a + 6] = "both of you are within touching distance, you make";
			texts[a + 7] = "contact with a stray fist but also take damage";
			texts[a + 8] = "when his extended foot makes contact with you.";
		}

		if (Prog == 80)
		{
			texts[a + 3] = "Now drenched in blood and about to pass out,";
			texts[a + 4] = "Mr Phillips wheelies towards you at speed in an";
			texts[a + 5] = "act of desperation.You jump out of the way again";
			texts[a + 6] = "and land awkwardly once more. Wanting to strike";
			texts[a + 7] = "again, he circles back but he aborts his attack as";
			texts[a + 8] = "you see him cough up even more blood.";

		}

		if (Prog == 90)
		{
			texts[a + 3] = "In a last ditch attempt, Mr Phillips, bloodied and";
			texts[a + 4] = "bruised, gets off his bike to throw it at you.";
			texts[a + 5] = "He throws, you dodge. You cock your forearm,";
			texts[a + 6] = "ready to make your final attack. As he stands,";
			texts[a + 7] = "he looks at you with a face of fear and regret.";
			texts[a + 8] = "You ignore his indirect pleas of mercy, choosing";
			texts[a + 9] = "to knock him down with a clothesline from hell.";
		}
	}

	// Security guard(angry) texts
	if (Calltext == "SGA")
	{
		if (Action == 0)
		{
			texts[0] = "Mr Yusoff, in an effort to defend against your";
			texts[1] = "projectile attack, tried to punch the bottle out";
			texts[2] = "of the air like a goalkeeper rising up for an";
			texts[3] = "inswinging ball from a corner but his efforts were";
			texts[4] = "in vain as it all did was shatter the bottle and";
			texts[5] = "leave him in agony as he tried to tend to the";
			texts[6] = "numerous cutsand burns on his hand.";
		}

		else if (Action == 1)
		{
			texts[0] = "Angered by your rude gesture, he tried to propel";
			texts[1] = "himself forward so as to take a swing at you but";
			texts[2] = "he fell down flat on his back before you could";
			texts[3] = "even try to dodge his attempted assault.";
		}

		else if (Action == 2)
		{
			texts[0] = "Due to his exhaustion, he thought your fake punch";
			texts[1] = "would actually connect with his face so he fell";
			texts[2] = "back in reaction and hit his head on the floor.";
		}

		else if (Action == 3)
		{
			texts[0] = "Your pepper spray managed to catch him off guard";
			texts[1] = "but once he came to his senses, Mr Yusoff tried to";
			texts[2] = "charge towards you but he slipped on the residual";
			texts[3] = "pepper spray fluid on the floor and fell flat on";
			texts[4] = "his face.";
		}

		else if (Action == 4)
		{
			texts[0] = "Your thunderous slap looked to be able to shake up";
			texts[1] = "the burly Mr Yusoff but once he collected himself,";
			texts[2] = "he retaliated with a clenched right fist of his";
			texts[3] = "own so devastating that it pierced the air but,";
			texts[4] = "luckily and very fortunately, you managed to dodge";
			texts[5] = "his weapon of mass destruction, with his fist just";
			texts[6] = "grazing your cheek.";
		}

		else if (Action == 5)
		{
			texts[0] = "After handing him a fifty-dollar bill, he wasn't";
			texts[1] = "satisfied with just fifty bucks so he demanded";
			texts[2] = "for more. Once he realised that was all you were";
			texts[3] = "willing to give him, he decked you.";
		}

		else if (Action == 6)
		{
			texts[0] = "You decided to suck up to Mr Yusoff by telling him";
			texts[1] = "about how important his job was to the company";
			texts[2] = "but once you mentioned the word \"job\" to him,";
			texts[3] = "he felled you with a punch.";
		}

		else if (Action == 7)
		{
			texts[0] = "Being exhausted from a night of staring at a door,";
			texts[1] = "he was in no mood for any cheerful talk and after";
			texts[2] = "angrily telling you, in his own words,";
			texts[3] = "“SHUT THE F*CK UP!”,";
			texts[4] = "he proceeded to shove you down to the floor.";
		}

		else if (Action == 8)
		{
			texts[0] = "You decided to mention to Mr Yusoff all the poor";
			texts[1] = "aspects about his job, ranging from the low wages";
			texts[2] = "to the unreasonable working hours. As you went";
			texts[3] = "through your points, Mr Yusoff nodded with every";
			texts[4] = "sentence you said but his mood still got worse as";
			texts[5] = "your speech just meant his brain had more words to";
			texts[6] = "process, which left him even more irritated.";
		}

		else if (Action == 9)
		{
			texts[0] = "You decided to offer to help him catfish girls";
			texts[1] = "using social media but Mr Yusoff hastily";
			texts[2] = "rejected your offer as the only thing on his mind";
			texts[3] = "then was to get some well-deserved sleep.";
		}

		else if (Action == 10)
		{
			texts[0] = "Throwing gasoline on Mr Yusoff had practically no";
			texts[1] = "effect on him. \"You're lucky I'm dead tired.";
			texts[2] = "Otherwise, I'd have beaten you up long ago.\",";
			texts[3] = "he said in response to your action.";
		}

		else if (Action == 11)
		{
			texts[0] = "Your pose seemed to get no reaction from him...";
		}
		
		else if (Action == 12)
		{
			texts[0] = "\"Good idea. Tell them to come over here so they";
			texts[1] = "can take over my job and I can go home.\",";
			texts[2] = "he remarked at your threat.";
		}
		
		else if (Action == 13)
		{
			texts[0] = "Your decision managed to startle Mr Yusoff when he";
			texts[1] = "looked over. Although he was too tired to say";
			texts[2] = "anything, he had a shocked and disgusted";
			texts[3] = "expression spread across his face.";
		}
		
		else if (Action == 14)
		{
			texts[0] = "\"You Muhammad Ali, is it?!\", Mr Yusoff tiredly";
			texts[1] = "quipped in response to your footwork.";
		}

		else if (Action == 15)
		{
			texts[0] = "\"You can stare all you want.";
			texts[1] = "At least you're not making noise...\",";
			texts[2] = "Mr Yusoff said in response.";
		}

		else if (Action == 16)
		{
			texts[0] = "Mr Yusoff paid your movements no mind and actually";
			texts[1] = "smiled as it meant you were less likely to cause";
			texts[2] = "more annoyance for him.";
		}

		else if (Action == 17)
		{
			texts[0] = "Your speaking on the phone may have helped him";
			texts[1] = "somewhat as Mr Yusoff treated it as white noise";
			texts[2] = "while he tried to catch a few winks.";
		}

		else if (Action == 18)
		{
			texts[0] = "\"Tsk... kids these days.";
			texts[1] = "At least you're not annoying me...\", Mr Yusoff";
			texts[2] = "said as he watched you pretend to use your phone.";
		}

		else if (Action == 19)
		{
			texts[0] = "Mr Yusoff tiredly obliged for a selfie and decided";
			texts[1] = "to flip the bird towards the camera for the";
			texts[2] = "photograph with a grin across his face.";
		}

		else if (Action == 20) // security guard (angry) intro 
		{
			texts[0] = "Uh oh, it's the security guard, Mr Yusoff. Before";
			texts[1] = "he worked as a security guard, he used to work as";
			texts[2] = "a bouncer but quit that job soon after learning";
			texts[3] = "that if he worked as a security guard, he wouldn't";
			texts[4] = "have to stand up as much during work. He has";
			texts[5] = "frequent mood swings due to the odd hours he is";
			texts[6] = "made to work. It looks as though he's been working";
			texts[7] = "since last night so talking with him may not be";
			texts[8] = "the best approach to get past him.";
		}

		else if (Action == 21)
		{
			texts[0] = "Right after our latest interaction, Mr Yusoff took";
			texts[1] = "a look at his watch and saw that his shift had";
			texts[2] = "finally ended. Before I could even wish him a safe";
			texts[3] = "trip back home, he had zoomed past me and began";
			texts[4] = "running back home.";
		}
	}

	// Security guard(happy) texts
	if (Calltext == "SGH")
	{
		if (Action == 0)
		{
			texts[0] = "You managed to find an opening at which to throw";
			texts[1] = "your molotov cocktail at Mr Yusoff but with his";
			texts[2] = "lightning-quick reflexes he managed to dodge it.";
			texts[3] = "He then threw a glass shard from the broken bottle";
			texts[4] = "right back at your face but you managed to";
			texts[5] = "half-dodge his throw and only landed up with a";
			texts[6] = "shallow cut across your cheek.";
		}

		else if (Action == 1)
		{
			texts[0] = "Your double bird-flip at Mr Yusoff pissed him off.";
			texts[1] = "\"You're not the first,";
			texts[2] = "and won't be the last to do that to me.\",";
			texts[3] = "he said with a smile across his face, before";
			texts[4] = "clocking me in the chest with his fest.";
		}

		else if (Action == 2)
		{
			texts[0] = "Your fake punch neither scared him nor made him";
			texts[1] = "flinch. However, it did tick him off though and he";
			texts[2] = "hit you with a painful one-two punch that made you";
			texts[3] = "more than flinch.";
		}

		else if (Action == 3)
		{
			texts[0] = "You took aim at Mr Yusoff and sprayed your can of";
			texts[1] = "pepper spray right at him but before you knew it,";
			texts[2] = "Mr Yusoff managed to dodge your pepper spray and";
			texts[3] = "knocked the can right of your palms, injuring your";
			texts[4] = "hands in the process.";
		}

		else if (Action == 4)
		{
			texts[0] = "Your slap connected with his cheek and managed to";
			texts[1] = "stun him but once he came back to his senses, he";
			texts[2] = "challenged you to a slapping contest.";
			texts[3] = "Unfortunately, Mr Yusoff emerged from the slapping";
			texts[4] = "match with a narrow victory, overcoming you with";
			texts[5] = "his wide-palmed technique compared to your";
			texts[6] = "close-palmed technique that was quick but not as";
			texts[7] = "pain-inducing as his.";
		}

		else if (Action == 5)
		{
			texts[0] = "You decided to give Mr Yusoff fifty dollars as a";
			texts[1] = "token of appreciation for guarding the building.";
			texts[2] = "He thanks you and graciously accepts the cash.";
			texts[3] = "He now appears more friendly and amiable than";
			texts[4] = "before.";
		}

		else if (Action == 6)
		{
			texts[0] = "Having decided to compliment Mr Yusoff's less than";
			texts[1] = "impressive looks, you go for it with all you got,";
			texts[2] = "and he seems pleased to be spoken to in a positive";
			texts[3] = "way that he is not normally used to.";
		}

		else if (Action == 7)
		{
			texts[0] = "You offer to be a listening ear for Mr Yusoff and";
			texts[1] = "his troubles and he gladly accepts your offer.";
			texts[2] = "He starts to complain about his unfulfilling job,";
			texts[3] = "his unbelievably low pay, his ungrateful children,";
			texts[4] = "his unfulfilling job, again, and ends off with a";
			texts[5] = "speech about the necessity of a minimum wage.";
			texts[6] = "He thanks you for listening him to and looks as";
			texts[7] = "though he managed to get a load off his mind.";
		}

		else if (Action == 8)
		{
			texts[0] = "You start freestyle rapping to him, using clever";
			texts[1] = "wordplay and witty innuendos to lambast his lousy";
			texts[2] = "job and non-existent work-life balance. However,";
			texts[3] = "Mr Yusoff does not look offended in the slightest.";
			texts[4] = "He then lets out a laugh and gets into it, laying";
			texts[5] = "down a beat for your lyrics. By the end of it, he";
			texts[6] = "smiles, as he rarely has this much fun at his job.";
		}

		else if (Action == 9)
		{
			texts[0] = "You comment on Mr Yusoff's lonely appearance, and";
			texts[1] = "decide to offer yourself to him and ask for his";
			texts[2] = "hand in marriage. This got Mr Yusoff to burst out";
			texts[3] = "in hysterical laughter. \"I appreciate the offer,";
			texts[4] = "but I will have to politely decline. I already";
			texts[5] = "have a lovely wifeand a junk pair of kids!\",";
			texts[6] = "he says with joyful tears in his eyes.";
		}

		else if (Action == 10)
		{
			texts[0] = "Drenched in gasoline, Mr Yusoff laughs it off but";
			texts[1] = "warns you to never do it again.";
		}

		else if (Action == 11)
		{
			texts[0] = "\"I like your block, kid!";
			texts[1] = "But let me show you how it’s done!\",";
			texts[2] = "he said, before busting out some of the moves he";
			texts[3] = "learnt from the security guard training centre.";
		}

		else if (Action == 12)
		{
			texts[0] = "\"Haha... you're not really gonna call them...";
			texts[1] = "are you... Well, if you are, tell them to take";
			texts[2] = "over my job!\", Mr Yusoff said, with a nervous";
			texts[3] = "smile across his face.";
		}

		else if (Action == 13)
		{
			texts[0] = "\"What the...\", Mr Yusoff's smile melted off his";
			texts[1] = "face, his expression replaced with a look of";
			texts[2] = "concernand shock.";
		}

		else if (Action == 14)
		{
			texts[0] = "\"Wow! Nice moves, kid!\" Mr Yusoff seems impressed";
			texts[1] = "by your fancy footwork.";
		}

		else if (Action == 15)
		{
			texts[0] = "\"Haha why are you staring at me like that?";
			texts[1] = "Perhaps you have fallen for me? \",";
			texts[2] = "Mr Yusoff joked in response to your intense stare.";
		}

		else if (Action == 16)
		{
			texts[0] = "Mr Yusoff was at first puzzled by your movement";
			texts[1] = "back but after you took a few more steps, he paid";
			texts[2] = "it no mind and went back to his own business.";
		}

		else if (Action == 17)
		{
			texts[0] = "Your speaking on the phone made for a bit of";
			texts[1] = "entertainment for Mr Yusoff as he made a";
			texts[2] = "half-hearted attempt to try and eavesdrop on your";
			texts[3] = "conversation.";
		}

		else if (Action == 18)
		{
			texts[0] = "You stand right in front of him, using your phone.";
			texts[1] = "Mr Yusoff, wanting to avoid the awkward silence,";
			texts[2] = "tries for small-talk and you engage in a";
			texts[3] = "light-hearted conversation with him.";
		}

		else if (Action == 19)
		{
			texts[0] = "Mr Yusoff happily obliged to the selfie, and was";
			texts[1] = "even willing to take more than one.";
		}

		else if (Action == 20) // security guard (happy) intro
		{
			texts[0] = "Uh oh, it's the security guard, Mr Yusoff. Before ";
			texts[1] = "he worked as a security guard, he used to work as";
			texts[2] = "a bouncer but quit that job soon after learning";
			texts[3] = "that if he worked as a security guard, he wouldn't";
			texts[4] = "have to stand up as much during work. He has";
			texts[5] = "frequent mood swings due to the odd hours he is";
			texts[6] = "made to work. He looks to be in a rather";
			texts[7] = "approachable mood as of right now.";
		}

		else if (Action == 21)
		{
			texts[0] = "Right after our latest interaction, Mr Yusoff took";
			texts[1] = "a look at his watch and saw that his shift had";
			texts[2] = "finally ended. I wished him a safe trip and in the";
			texts[3] = "blink of an eye, disappeared from my sight and";
			texts[4] = "began joyfully running back home.";
		}
	}

	// Boss texts
	if (Calltext == "Bo")
	{
		
		if (Action == 0)
		{
			texts[0] = "As you take aim, your arms tremble in fear.";
			texts[1] = "You shake it off and lob the projectile at him.";
			texts[2] = "A column of flame erupts at your boss's feet,";
			texts[3] = "barely causing a reaction, with him treating";
			texts[4] = "your attack as if a fly had tried to bite him.";
			texts[5] = "He then picks up a glass shard from the ground";
			texts[6] = "and throws it directly at you.";
		}

		else if (Action == 1)
		{
			texts[0] = "Unfortunately, this action only seemed to anger";
			texts[1] = "him. However, you notice that he seemed to be";
			texts[2] = "genuinely hurt by this. After recovering from your";
			texts[3] = "rude gesture, he threw an office chair at you.";
		}

		else if (Action == 2)
		{
			texts[0] = "You swiftly faked a swing at the boss's nether";
			texts[1] = "regions, causing him to flinch dramatically.";
			texts[2] = "When he steadied himself, he responded with a";
			texts[3] = "vicious kick directed at your no-no region.";
			texts[4] = "He still looks shaken up by your feint though.";

		}

		else if (Action == 3)
		{
			texts[0] = "\"BAHAHA! WHAT ARE YOU GONNA DO ?!?!";
			texts[1] = "DO YOU HONESTLY THINK YOU CAN HURT ME";
			texts[2] = "WITH THAT PUNY SPRAY CAN ?!?\", your boss bellowed";
			texts[3] = "as you sprayed him with that \"puny spray can\",";
			texts[4] = "in the process, managing to land some of it on his";
			texts[5] = "eyes and causing him a reasonable amount of pain.";
		}

		else if (Action == 4)
		{
			texts[0] = "After all your previous encounters from today,";
			texts[1] = "you felt a burning sensation emanating from your";
			texts[2] = "right hand... similar to the sensation you feel";
			texts[3] = "when you're home alone. However, this sensation";
			texts[4] = "was much more different and far more pure.";
			texts[5] = "Before your brain's neurons could even send the";
			texts[6] = "command to give a right-handed slap to your boss,";
			texts[7] = "your right hand, glowing brightly, made contact at";
			texts[8] = "the speed of light, with your boss's left cheek,";
			texts[9] = "causing him to fly back a considerable distance.";
		}

		else if (Action == 5)
		{
			texts[0] = "You attempt to placate him by offering to work on";
			texts[1] = "a pay cut for the next few months and he accepts,";
			texts[2] = "before giving you a hellish back-handed slap.";
		}

		else if (Action == 6)
		{
			texts[0] = "\"Nice package that you have down there!\"";
			texts[1] = "You joyfully say, recalling from when your eyes";
			texts[2] = "wandered around in the office toilet.";
			texts[3] = "\"FLATTERY WILL GET YOU NOWHERE!!!";
			texts[4] = "but thanks for the compliment though.\",";
			texts[5] = "he says, with his face betraying emotion.";
		}

		else if (Action == 7)
		{
			texts[0] = "As he approaches to interrogate you about your";
			texts[1] = "tardiness, you attempt to sweet-talk him. He";
			texts[2] = "almost falls for it, but doesn't, and screams at";
			texts[3] = "you, nearly rupturing your ear drums.";
		}

		else if (Action == 8)
		{
			texts[0] = "You lamented your boss's work ethic and blamed";
			texts[1] = "him for causing everybody to work OT yesterday.";
			texts[2] = "\"I'VE WORKED MORE OVERTIME THAN THE TIME YOU'VE";
			texts[3] = "BEEN ALIVE!!!\", he shouted in response to you,";
			texts[4] = "before clocking you in the head with a monitor.";
		}

		else if (Action == 9)
		{
			texts[0] = "\"Maybe we can... figure something out... sir...\",";
			texts[1] = "you say as you start pulling down your pants.";
			texts[2] = "Your boss stares at you, seemingly unimpressed.";
			texts[3] = "However, you spot something in between his legs...";
		}

		else if (Action == 10)
		{
			texts[0] = "As he paces closer, yelling at you, you decide to";
			texts[1] = "throw gasoline at him. In doing so, you saved";
			texts[2] = "yourself as this made him slippery and he only";
			texts[3] = "managed to land a bit of contact with his attack.";

		}

		else if (Action == 11)
		{
			texts[0] = "As you brace for a potential attack, he accepts";
			texts[1] = "your invitation and strikes for your gut with a";
			texts[2] = "vicious high knee that would have been otherwise";
			texts[3] = "fatal, if not for your block.";
		}

		else if (Action == 12)
		{
			texts[0] = "You pull out your phone, key in '999', and hover";
			texts[1] = "your fingers over the 'dial' button. He isn't";
			texts[2] = "fazed at all and weakly strikes you with a paper";
			texts[3] = "tray he threw.";
		}

		else if (Action == 13)
		{
			texts[0] = "Your shield of choice makes him hesitate, but";
			texts[1] = "he stills throws a fist, a relatively weak one,";
			texts[2] = "aimed at you.";
		}

		else if (Action == 14)
		{
			texts[0] = "You nimbly sidestep away from the boss's attack,";
			texts[1] = "but he goes for another one immediately after.";
		}

		else if (Action == 15)
		{
			texts[0] = "Staring at him only causes him to stare back.";
			texts[1] = "In a moment of weakness, you blink, and lose the";
			texts[2] = "staring match.You look over at him and see him";
			texts[3] = "profusely rubbing his eyes. It seems he must have";
			texts[4] = "been weakened by the contest too.";
		}

		else if (Action == 16)
		{
			texts[0] = "As you take multiple steps back, he pursues you,";
			texts[1] = "sparking a wild goose chase around the office.";
			texts[2] = "Once you get back to ground zero, your boss is";
			texts[3] = "panting profusely, looking more tired than before.";
		}

		else if (Action == 17)
		{
			texts[0] = "As the phone buzzed, it quickly became apparent";
			texts[1] = "to you that your friend would not pick up in time";
			texts[2] = "to help, so you dejectedly hung up. Seeing this";
			texts[3] = "pitiful sight, he lets out a laugh and chokes on";
			texts[4] = "his saliva, prompting you to let out a laugh too.";
			texts[5] = "Angered by your insolence, he strikes you hard.";
		}

		else if (Action == 18)
		{
			texts[0] = "You choose to fiddle with your phone, in the";
			texts[1] = "midst of your fight, angering your boss and";
			texts[2] = "causing him to punch you in fury.";
		}

		else if (Action == 19)
		{
			texts[0] = "You attempt to get a selfie with your boss and";
			texts[1] = "manage to get a few good shots before he grabs";
			texts[2] = "your phone and viciously hurls it at you.";
		}

		else if (Action == 20) // boss intro
		{
			texts[0] = "You finally entered the workplace after numerous";
			texts[1] = "trials and tribulations delayed your trip. As you";
			texts[2] = "approach your work desk you feel a menacing aura";
			texts[3] = "fill the air... You look around...";
			texts[4] = "as the lights dim and the temperature drops...";
			texts[5] = "HE appears... and HE is furious!";
			texts[6] = "You are late for work... extremely late for work!";
			texts[7] = "You know it... he knows it...";
			texts[8] = "As you remember the people you met on the way...";
			texts[9] = "the challenges you overcame...";
			texts[10] = "you prepare to face...";
			texts[11] = "your BOSS.";
		}

		else if (Action == 21) // when boss regens from 50 back to 30% progress
		{
			texts[0] = "Your boss, now looking like the battle has taken";
			texts[1] = "a toll on him, shouts for his deputy manager.";
			texts[2] = "The deputy manager, hidden from your sight, throws";
			texts[3] = "an energy drink towards your boss. He gulps the ";
			texts[4] = "whole thing down in seconds and it has an ";
			texts[5] = "immediate effect on him.";
		}
	}
	return texts;
}

Texts::~Texts(void)
{
}

