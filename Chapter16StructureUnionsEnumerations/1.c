/* For brevity, I've removed most of the countries */
#include <stdio.h>
#include <stdlib.h>

struct dialing_code {
	char *country;
	int code;
};

const struct dialing_code country_codes[] = {
	{"Argentina", 54},{"Bangladesh", 880},
	{"Brazil", 55},{"Burma (Myanmar)", 95}
};

int main (void){
	int dialing_code;
	printf("%s", "Enter an international dialing code:");
	scanf("%d", &dialing_code);
	size_t size_of_struct = sizeof(country_codes) / sizeof(country_codes[0]);

	for (int i = 0; i < size_of_struct; i++){
		if (country_codes[i].code == dialing_code){
			printf("%s\n",country_codes[i].country);
			exit(EXIT_SUCCESS);
		} else {
			continue;
		}
	}
	
	printf("Code %d not found.\n", dialing_code);

	return 0;
}
