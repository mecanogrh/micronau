static int mod_dst_s_to_n[] = {0,1,4,7,10,5,8,11,6,9,12,3,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,71,72,73,74,75,76,77,36,37,38,39,40,41,42,43,0,44,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,0,45,46,47,48,49,2};
static int mod_dst_n_to_s[78];
static int mod_src_s_to_n[] = {0,36,37,6,24,25,26,33,5,2,3,4,10,11,14,15,8,9,12,13,18,19,22,23,16,17,20,21,32,31,30,28,27,34,35,29,1,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111,112,113,114,7};
static int mod_src_n_to_s[115];
static int sh_s_to_n[] = {34,35,5,23,24,25,31,4,1,2,3,9,10,13,14,7,8,11,12,17,18,21,22,15,16,19,20,30,29,27,26,32,33,28,0,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111,112,6};
static int sh_n_to_s[113];
static int filter_s_to_n[] = {0,3,1,7,11,5,2,4,6,9,8,20,16,17,13,14,15,10,12,18,19};
static int filter_n_to_s[20];
static int tracking_s_to_n[] = {33,0,5,23,24,25,32,4,1,2,3,9,10,13,14,7,8,11,12,17,18,21,22,15,16,19,20,31,30,29,27,26,28,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111,6};
static int tracking_n_to_s[112];

void init_mapping() {
unsigned int i;
	for (i = 0; i < sizeof(mod_dst_n_to_s)/sizeof(int); i++) {
		mod_dst_n_to_s[i] = 0;
	}
	for (i = 0; i < sizeof(mod_dst_s_to_n)/sizeof(int); i++) {
		mod_dst_n_to_s[mod_dst_s_to_n[i]] = i;
	}

	for (i = 0; i < sizeof(mod_src_n_to_s)/sizeof(int); i++) {
		mod_src_n_to_s[i] = 0;
	}
	for (i = 0; i < sizeof(mod_src_s_to_n)/sizeof(int); i++) {
		mod_src_n_to_s[mod_src_s_to_n[i]] = i;
	}
	for (i = 0; i < sizeof(sh_n_to_s)/sizeof(int); i++) {
		sh_n_to_s[i] = 0;
	}
	for (i = 0; i < sizeof(sh_s_to_n)/sizeof(int); i++) {
		sh_n_to_s[sh_s_to_n[i]] = i;
	}
	for (i = 0; i < sizeof(filter_n_to_s)/sizeof(int); i++) {
		filter_n_to_s[i] = 0;
	}
	for (i = 0; i < sizeof(filter_s_to_n)/sizeof(int); i++) {
		filter_n_to_s[filter_s_to_n[i]] = i;
	}
	for (i = 0; i < sizeof(tracking_n_to_s)/sizeof(int); i++) {
		tracking_n_to_s[i] = 0;
	}
	for (i = 0; i < sizeof(tracking_s_to_n)/sizeof(int); i++) {
		tracking_n_to_s[tracking_s_to_n[i]] = i;
	}
}

