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