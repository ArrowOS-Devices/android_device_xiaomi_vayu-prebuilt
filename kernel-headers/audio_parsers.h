#define AUDIO_PARSER_CODEC_DTSHD 0

struct dtshd_iec61937_info {
	int sample_rate;
	int num_channels;
};

struct audio_parser_codec_info {
	int codec_type;
	struct {
		struct dtshd_iec61937_info dtshd_tr_info;
	} codec_config;
};

int init_audio_parser(void*, ...);
int get_iec61937_info(void*);
int get_dtshd_iec61937_info(void*);
