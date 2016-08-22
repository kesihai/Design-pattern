#include <stdio.h>
#include "Chat_Media.h"
#include "Female_User.h"
#include "Male_User.h"

int main()
{
	Chat_Media* chat_room = new Chat_Media();
	Female_User* female_1 = new Female_User(chat_room, "female_1");
	Female_User* female_2 = new Female_User(chat_room, "female_2");
	Male_User *male_1 = new Male_User(chat_room, "male_1");

	female_1->Send(female_2, "hello ,i am female_1");
	male_1->Send(female_1, "hello, beautiful girl");

	getchar();
	return 0;
}