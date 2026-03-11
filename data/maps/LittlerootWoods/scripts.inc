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

EventScript_EncontroHisuianVoltorb::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_VOLTORB_HISUI, CRY_MODE_ENCOUNTER
	msgbox Texto_VoltorbAtaca, MSGBOX_DEFAULT
	waitmoncry
	setflag FLAG_LITTLEROOT_WOODS_HISUIAN_VOLTORB
	removeobject 2
	createmon 1, 0, SPECIES_VOLTORB_HISUI, 5, nature=NATURE_TIMID, hpIv=31, atkIv=31, defIv=31, speedIv=31, spAtkIv=31, spDefIv=31, shinyMode=SHINY_MODE_ALWAYS
	dowildbattle
	release
	end

Texto_VoltorbAtaca:
	.string "Bzzzt!\n$"

Gauntlet_Bart_Battle::
	trainerbattle_single TRAINER_BART_1, Bart_Intro, Bart_Outro
	msgbox Bart_PostBattle, MSGBOX_AUTOCLOSE
	end

Bart_Intro:
	.string "I'm Bart and my bugs will\n"
	.string "give you some trouble!$"

Bart_Outro:
	.string "My Caterpie was no match...$"

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