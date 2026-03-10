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