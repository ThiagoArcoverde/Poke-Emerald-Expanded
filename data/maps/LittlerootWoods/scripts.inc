LittlerootWoods_MapScripts::
	.byte 0

LittlerootWoods_EventScript_NewRegionNPC::
	lock
	faceplayer
	msgbox LittlerootWoods_Text_WelcomeMessage, MSGBOX_DEFAULT
	release
	end

LittlerootWoods_Text_WelcomeMessage:
	.string "Welcome to Littleroot Woods! This is a\n"
	.string "region that was recently discovered.\p"
	.string "Here you will have new encounters, and\n"
	.string "if you feel confident, a challenge\l"
	.string "may await you.\p"
	.string "As a reward for winning, you will be\n"
	.string "able to find a special Pokémon.$"

LittlerootWoods_EventScript_GauntletIntro::
	lock
	faceplayer
	msgbox LittlerootWoods_Text_GauntletIntro, MSGBOX_DEFAULT
	release
	end

LittlerootWoods_Text_GauntletIntro:
	.string "Be careful! There is a gauntlet\n"
	.string "ahead. You may find some strong\p"
	.string "trainers. If you enter this challenge,\n"
	.string "you won't be able to leave until you\l"
	.string "either triumph or white out!\p"
	.string "But remember, there is a great reward\n"
	.string "awaiting at the end.$"

EventScript_EncontroHisuianGrowlithe::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_GROWLITHE_HISUI, CRY_MODE_ENCOUNTER
	msgbox Texto_GrowlitheAtaca, MSGBOX_DEFAULT
	waitmoncry
	setflag FLAG_LITTLEROOT_WOODS_HISUIAN_GROWLITHE
	removeobject 2
	createmon 1, 0, SPECIES_GROWLITHE_HISUI, 12, nature=NATURE_ADAMANT, hpIv=31, atkIv=31, defIv=31, speedIv=31, spAtkIv=31, spDefIv=31, shinyMode=SHINY_MODE_ALWAYS
	dowildbattle
	release
	end

Texto_GrowlitheAtaca:
	.string "GRRR!\n$"

Gauntlet_Bart_Battle::
	trainerbattle_single TRAINER_BART_1, Bart_Intro, Bart_Outro
	msgbox Bart_PostBattle, MSGBOX_AUTOCLOSE
	end

Bart_Intro:
	.string "I'm Bart and my bugs will\n"
	.string "give you some trouble!$"

Bart_Outro:
	.string "I was no match...$"

Bart_PostBattle:
	.string "I need stronger bugs for\n"
	.string "this Gauntlet.$"

Gauntlet_Monika_Battle::
	trainerbattle_single TRAINER_MONIKA_1, Monika_Intro, Monika_Outro
	msgbox Monika_PostBattle, MSGBOX_AUTOCLOSE
	end

Monika_Intro:
	.string "I am the strongest girl on\n"
	.string "this block! Nobody beats me!$"

Monika_Outro:
	.string "It seems I am not as strong\n"
	.string "as I thought...$"

Monika_PostBattle:
	.string "Fine, you won this time.\n"
	.string "But don't you dare touch my bunny!$"

Gauntlet_Oswald_Battle::
	trainerbattle_single TRAINER_OSWALD_1, Oswald_Intro,  Oswald_Outro
	msgbox Oswald_PostBattle, MSGBOX_AUTOCLOSE
	end

Oswald_Intro:
	.string "The small critters of this forest\n"
	.string "are faster than your eyes can see!$"

Oswald_Outro:
	.string "Outmaneuvered...\n"
	.string "You have quite the reflex!$"

Oswald_PostBattle:
	.string "My team uses quick strikes to numb\n"
	.string "their foes. It's how they survive\l"
	.string "against much larger threats.$"

Gauntlet_Barto_Battle::
	trainerbattle_single TRAINER_BARTO_1, Barto_Intro, Barto_Outro
	msgbox Barto_PostBattle, MSGBOX_AUTOCLOSE
	end

Barto_Intro:
	.string "A pleasant afternoon for a duel,\n"
	.string "don't you agree? I trust you have\l"
	.string "prepared for a refined struggle.$"

Barto_Outro:
	.string "Splendid execution!\n"
	.string "Your tactics are quite exquisite.$"

Barto_PostBattle:
	.string "A true gentleman knows when he is\n"
	.string "bested. May your journey through\l"
	.string "the woods be as sharp as your wit.$"