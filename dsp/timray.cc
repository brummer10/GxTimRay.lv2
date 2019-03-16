// generated from file '../dkbuild/timray//timray.dsp' by dsp2cc:
// Code generated with Faust 0.9.90 (http://faust.grame.fr)

#include "janray_neg_table.h"
#include "janray_table.h"
#include "math.h"

namespace timray {

class Dsp: public PluginLV2 {
private:
	uint32_t fSamplingFreq;
	double 	fConst0;
	double 	fConst1;
	double 	fConst2;
	double 	fConst3;
	double 	fConst4;
	double 	fConst5;
	FAUSTFLOAT 	fslider0;
	FAUSTFLOAT	*fslider0_;
	double 	fRec1[2];
	double 	fConst6;
	double 	fConst7;
	double 	fConst8;
	double 	fConst9;
	FAUSTFLOAT 	fslider1;
	FAUSTFLOAT	*fslider1_;
	double 	fRec2[2];
	double 	fConst10;
	double 	fConst11;
	double 	fConst12;
	double 	fConst13;
	FAUSTFLOAT 	fslider2;
	FAUSTFLOAT	*fslider2_;
	double 	fRec3[2];
	double 	fConst14;
	double 	fConst15;
	double 	fConst16;
	double 	fConst17;
	double 	fConst18;
	double 	fConst19;
	double 	fConst20;
	double 	fConst21;
	double 	fConst22;
	double 	fConst23;
	double 	fConst24;
	double 	fConst25;
	double 	fConst26;
	double 	fConst27;
	double 	fConst28;
	double 	fConst29;
	FAUSTFLOAT 	fslider3;
	FAUSTFLOAT	*fslider3_;
	double 	fRec4[2];
	double 	fConst30;
	double 	fConst31;
	double 	fConst32;
	double 	fConst33;
	double 	fConst34;
	double 	fConst35;
	double 	fConst36;
	double 	fConst37;
	double 	fConst38;
	double 	fConst39;
	double 	fConst40;
	double 	fConst41;
	double 	fConst42;
	double 	fConst43;
	double 	fConst44;
	double 	fConst45;
	double 	fConst46;
	double 	fConst47;
	double 	fConst48;
	double 	fConst49;
	double 	fConst50;
	double 	fConst51;
	double 	fConst52;
	double 	fConst53;
	double 	fConst54;
	double 	fConst55;
	double 	fConst56;
	double 	fConst57;
	double 	fConst58;
	double 	fConst59;
	double 	fConst60;
	double 	fConst61;
	double 	fConst62;
	double 	fConst63;
	double 	fConst64;
	double 	fConst65;
	double 	fConst66;
	double 	fConst67;
	double 	fConst68;
	double 	fConst69;
	double 	fConst70;
	double 	fConst71;
	double 	fConst72;
	double 	fConst73;
	double 	fConst74;
	double 	fConst75;
	double 	fConst76;
	double 	fConst77;
	double 	fConst78;
	double 	fConst79;
	double 	fConst80;
	double 	fConst81;
	double 	fConst82;
	double 	fConst83;
	double 	fConst84;
	double 	fConst85;
	double 	fConst86;
	double 	fConst87;
	double 	fConst88;
	double 	fConst89;
	double 	fConst90;
	double 	fConst91;
	double 	fConst92;
	double 	fConst93;
	double 	fConst94;
	double 	fConst95;
	double 	fConst96;
	double 	fConst97;
	double 	fConst98;
	double 	fConst99;
	double 	fConst100;
	double 	fConst101;
	double 	fConst102;
	double 	fConst103;
	double 	fConst104;
	double 	fConst105;
	double 	fConst106;
	double 	fConst107;
	double 	fConst108;
	double 	fConst109;
	double 	fConst110;
	double 	fConst111;
	double 	fConst112;
	double 	fConst113;
	double 	fConst114;
	double 	fConst115;
	double 	fConst116;
	double 	fConst117;
	double 	fConst118;
	double 	fConst119;
	double 	fConst120;
	double 	fConst121;
	double 	fConst122;
	double 	fConst123;
	double 	fConst124;
	double 	fConst125;
	double 	fConst126;
	double 	fConst127;
	double 	fConst128;
	double 	fConst129;
	double 	fConst130;
	double 	fConst131;
	double 	fConst132;
	double 	fConst133;
	double 	fConst134;
	double 	fConst135;
	double 	fConst136;
	double 	fConst137;
	double 	fRec5[6];
	double 	fConst138;
	double 	fConst139;
	double 	fConst140;
	double 	fConst141;
	double 	fConst142;
	double 	fConst143;
	double 	fConst144;
	double 	fConst145;
	double 	fConst146;
	double 	fConst147;
	double 	fConst148;
	double 	fConst149;
	double 	fConst150;
	double 	fConst151;
	double 	fConst152;
	double 	fConst153;
	double 	fConst154;
	double 	fConst155;
	double 	fConst156;
	double 	fConst157;
	double 	fConst158;
	double 	fConst159;
	double 	fConst160;
	double 	fConst161;
	double 	fConst162;
	double 	fConst163;
	double 	fConst164;
	double 	fConst165;
	double 	fConst166;
	double 	fConst167;
	double 	fConst168;
	double 	fConst169;
	double 	fConst170;
	double 	fConst171;
	double 	fConst172;
	double 	fConst173;
	double 	fConst174;
	double 	fConst175;
	double 	fConst176;
	double 	fConst177;
	double 	fConst178;
	double 	fConst179;
	double 	fConst180;
	double 	fConst181;
	double 	fConst182;
	double 	fConst183;
	double 	fConst184;
	double 	fConst185;
	double 	fRec0[3];
	double 	fConst186;
	double 	fConst187;
	double 	fConst188;
	FAUSTFLOAT 	fslider4;
	FAUSTFLOAT	*fslider4_;
	double 	fRec6[2];
	double 	fConst189;

	void connect(uint32_t port,void* data);
	void clear_state_f();
	void init(uint32_t samplingFreq);
	void compute(int count, FAUSTFLOAT *input0, FAUSTFLOAT *output0);

	static void clear_state_f_static(PluginLV2*);
	static void init_static(uint32_t samplingFreq, PluginLV2*);
	static void compute_static(int count, FAUSTFLOAT *input0, FAUSTFLOAT *output0, PluginLV2*);
	static void del_instance(PluginLV2 *p);
	static void connect_static(uint32_t port,void* data, PluginLV2 *p);
public:
	Dsp();
	~Dsp();
};



Dsp::Dsp()
	: PluginLV2() {
	version = PLUGINLV2_VERSION;
	id = "timray";
	name = N_("TimRay");
	mono_audio = compute_static;
	stereo_audio = 0;
	set_samplerate = init_static;
	activate_plugin = 0;
	connect_ports = connect_static;
	clear_state = clear_state_f_static;
	delete_instance = del_instance;
}

Dsp::~Dsp() {
}

inline void Dsp::clear_state_f()
{
	for (int i=0; i<2; i++) fRec1[i] = 0;
	for (int i=0; i<2; i++) fRec2[i] = 0;
	for (int i=0; i<2; i++) fRec3[i] = 0;
	for (int i=0; i<2; i++) fRec4[i] = 0;
	for (int i=0; i<6; i++) fRec5[i] = 0;
	for (int i=0; i<3; i++) fRec0[i] = 0;
	for (int i=0; i<2; i++) fRec6[i] = 0;
}

void Dsp::clear_state_f_static(PluginLV2 *p)
{
	static_cast<Dsp*>(p)->clear_state_f();
}

inline void Dsp::init(uint32_t samplingFreq)
{
	fSamplingFreq = samplingFreq;
	fConst0 = double(min(1.92e+05, max(1.0, (double)fSamplingFreq)));
	fConst1 = (1.96687984771695e-11 * fConst0);
	fConst2 = (0.000993377609981536 + (fConst0 * (fConst1 - 1.98685356395546e-05)));
	fConst3 = (0.00198675521996307 - (3.93375969543389e-11 * faustpower<2>(fConst0)));
	fConst4 = (0.000993377609981536 + (fConst0 * (1.98685356395546e-05 + fConst1)));
	fConst5 = (1.0 / fConst4);
	fConst6 = (8.1900260876715e-26 * fConst0);
	fConst7 = (6.89310252845818e-16 + (fConst0 * (6.76768504805577e-17 + (fConst0 * (2.64141605862444e-19 + fConst6)))));
	fConst8 = (4.24153195985771e-26 * fConst0);
	fConst9 = (3.28663128556886e-15 + (fConst0 * (3.10806269572715e-16 + (fConst0 * (1.36882496080625e-19 + fConst8)))));
	fConst10 = (4.66568515584348e-26 * fConst0);
	fConst11 = ((fConst0 * ((fConst0 * (0 - (1.50615868369112e-19 + fConst10))) - 4.87506573211503e-16)) - 3.34260262044674e-13);
	fConst12 = (9.00902869643865e-26 * fConst0);
	fConst13 = ((fConst0 * ((fConst0 * ((fConst0 * (0 - (2.90642894385791e-19 + fConst12))) - 3.55446243892915e-16)) - 7.27548907255322e-14)) - 7.3330877962321e-13);
	fConst14 = ((fConst0 * ((fConst0 * ((fConst0 * (0 - (2.64163424931944e-19 + fConst6))) - 1.38041703417704e-16)) - 2.01403153940399e-15)) - 6.89310252845818e-15);
	fConst15 = ((fConst0 * ((fConst0 * ((fConst0 * (0 - (1.36893795956795e-19 + fConst8))) - 3.47248472167364e-16)) - 6.43876014761958e-15)) - 3.28663128556886e-14);
	fConst16 = (6.88589778203442e-12 + (fConst0 * (3.76495904425535e-13 + (fConst0 * (5.27605017210479e-16 + (fConst0 * (1.50628298232899e-19 + fConst10)))))));
	fConst17 = (7.3330877962321e-12 + (fConst0 * (2.15016915682811e-12 + (fConst0 * (1.49068310669626e-13 + (fConst0 * (4.32870793899841e-16 + (fConst0 * (2.90666895362241e-19 + fConst12)))))))));
	fConst18 = (1.24091304358659e-23 * fConst0);
	fConst19 = (3.81196836712471e-17 + (fConst0 * (3.77525356518785e-18 + (fConst0 * (1.78112175014536e-20 + fConst18)))));
	fConst20 = (6.42656357554199e-24 * fConst0);
	fConst21 = (1.81754651744506e-16 + (fConst0 * (1.73435992252234e-17 + (fConst0 * (2.2288008534494e-20 + fConst20)))));
	fConst22 = (7.06921993309618e-24 * fConst0);
	fConst23 = ((fConst0 * ((fConst0 * (0 - (3.13535791491583e-20 + fConst22))) - 4.2788606524867e-17)) - 1.86505675905608e-14);
	fConst24 = (1.36500434794525e-23 * fConst0);
	fConst25 = ((fConst0 * ((fConst0 * ((fConst0 * (0 - (3.27935418429456e-20 + fConst24))) - 2.31008826466573e-17)) - 4.05815884904672e-15)) - 4.05528549694118e-14);
	fConst26 = ((fConst0 * ((fConst0 * ((fConst0 * (0 - (2.11171371227009e-20 + fConst18))) - 7.73549469521963e-18)) - 1.11773665270642e-16)) - 3.81196836712471e-16);
	fConst27 = ((fConst0 * ((fConst0 * ((fConst0 * (0 - (2.4000110984491e-20 + fConst20))) - 1.95391890110555e-17)) - 3.57955975814928e-16)) - 1.81754651744506e-15);
	fConst28 = (3.82803530759538e-13 + (fConst0 * (2.11801228617533e-14 + (fConst0 * (4.70251408743855e-17 + (fConst0 * (3.3236891844155e-20 + fConst22)))))));
	fConst29 = (4.05528549694118e-13 + (fConst0 * (1.1932747106362e-13 + (fConst0 * (8.35220070756327e-15 + (fConst0 * (3.09740836569766e-17 + (fConst0 * (3.64300534263177e-20 + fConst24)))))))));
	fConst30 = (1.31948942471635e-20 * fConst0);
	fConst31 = ((fConst0 * (2.70608771023561e-15 - fConst30)) - 3.83098989908991e-15);
	fConst32 = (6.83350273334702e-21 * fConst0);
	fConst33 = ((fConst0 * (1.2836617480244e-14 - fConst32)) - 1.82661598388607e-14);
	fConst34 = (3.43409359073666e-12 + (fConst0 * (fConst32 - 1.28384379954594e-14)));
	fConst35 = ((fConst0 * (7.23925962947242e-13 + (fConst0 * (fConst30 - 2.7096029653953e-15)))) - 3.83098989908991e-14);
	fConst36 = (8.7086302031279e-23 * fConst0);
	fConst37 = ((fConst0 * (1.48820277455438e-13 + (fConst0 * (fConst36 - 2.98625810362321e-16)))) - 6.92749876611283e-13);
	fConst38 = ((fConst0 * (2.98602609678267e-16 - fConst36)) - 6.92749876611283e-14);
	fConst39 = (4.51011180400903e-23 * fConst0);
	fConst40 = ((fConst0 * (2.30115350547207e-16 - fConst39)) - 3.3030314116826e-13);
	fConst41 = (3.91581968496678e-13 + (fConst0 * (fConst39 - 2.30127365947628e-16)));
	fConst42 = (6.89310252845818e-16 + (fConst0 * ((fConst0 * (2.64141605862444e-19 - fConst6)) - 6.76768504805577e-17)));
	fConst43 = (3.28663128556886e-15 + (fConst0 * ((fConst0 * (1.36882496080625e-19 - fConst8)) - 3.10806269572715e-16)));
	fConst44 = ((fConst0 * (4.87506573211503e-16 + (fConst0 * (fConst10 - 1.50615868369112e-19)))) - 3.34260262044674e-13);
	fConst45 = (7.3330877962321e-13 + (fConst0 * ((fConst0 * (3.55446243892915e-16 + (fConst0 * (fConst12 - 2.90642894385791e-19)))) - 7.27548907255322e-14)));
	fConst46 = (6.89310252845818e-15 + (fConst0 * ((fConst0 * (1.38041703417704e-16 + (fConst0 * (fConst6 - 2.64163424931944e-19)))) - 2.01403153940399e-15)));
	fConst47 = (3.28663128556886e-14 + (fConst0 * ((fConst0 * (3.47248472167364e-16 + (fConst0 * (fConst8 - 1.36893795956795e-19)))) - 6.43876014761958e-15)));
	fConst48 = ((fConst0 * (3.76495904425535e-13 + (fConst0 * ((fConst0 * (1.50628298232899e-19 - fConst10)) - 5.27605017210479e-16)))) - 6.88589778203442e-12);
	fConst49 = (7.3330877962321e-12 + (fConst0 * ((fConst0 * (1.49068310669626e-13 + (fConst0 * ((fConst0 * (2.90666895362241e-19 - fConst12)) - 4.32870793899841e-16)))) - 2.15016915682811e-12)));
	fConst50 = (3.81196836712471e-17 + (fConst0 * ((fConst0 * (1.78112175014536e-20 - fConst18)) - 3.77525356518785e-18)));
	fConst51 = (1.81754651744506e-16 + (fConst0 * ((fConst0 * (2.2288008534494e-20 - fConst20)) - 1.73435992252234e-17)));
	fConst52 = ((fConst0 * (4.2788606524867e-17 + (fConst0 * (fConst22 - 3.13535791491583e-20)))) - 1.86505675905608e-14);
	fConst53 = (4.05528549694118e-14 + (fConst0 * ((fConst0 * (2.31008826466573e-17 + (fConst0 * (fConst24 - 3.27935418429456e-20)))) - 4.05815884904672e-15)));
	fConst54 = (3.81196836712471e-16 + (fConst0 * ((fConst0 * (7.73549469521963e-18 + (fConst0 * (fConst18 - 2.11171371227009e-20)))) - 1.11773665270642e-16)));
	fConst55 = (1.81754651744506e-15 + (fConst0 * ((fConst0 * (1.95391890110555e-17 + (fConst0 * (fConst20 - 2.4000110984491e-20)))) - 3.57955975814928e-16)));
	fConst56 = ((fConst0 * (2.11801228617533e-14 + (fConst0 * ((fConst0 * (3.3236891844155e-20 - fConst22)) - 4.70251408743855e-17)))) - 3.82803530759538e-13);
	fConst57 = (4.05528549694118e-13 + (fConst0 * ((fConst0 * (8.35220070756327e-15 + (fConst0 * ((fConst0 * (3.64300534263177e-20 - fConst24)) - 3.09740836569766e-17)))) - 1.1932747106362e-13)));
	fConst58 = (4.09501304383575e-25 * fConst0);
	fConst59 = (6.89310252845818e-16 + (fConst0 * (6.76768504805577e-17 + (fConst0 * (fConst58 - 7.92424817587331e-19)))));
	fConst60 = (2.12076597992886e-25 * fConst0);
	fConst61 = (3.28663128556886e-15 + (fConst0 * (3.10806269572715e-16 + (fConst0 * (fConst60 - 4.10647488241876e-19)))));
	fConst62 = (2.33284257792174e-25 * fConst0);
	fConst63 = ((fConst0 * ((fConst0 * (4.51847605107335e-19 - fConst62)) - 4.87506573211503e-16)) - 3.34260262044674e-13);
	fConst64 = (4.50451434821932e-25 * fConst0);
	fConst65 = (2.19992633886963e-12 + (fConst0 * ((fConst0 * ((fConst0 * (8.71928683157373e-19 - fConst64)) - 3.55446243892915e-16)) - 7.27548907255322e-14)));
	fConst66 = (2.06793075853745e-14 + (fConst0 * ((fConst0 * ((fConst0 * (7.92490274795832e-19 - fConst58)) - 1.38041703417704e-16)) - 2.01403153940399e-15)));
	fConst67 = (9.85989385670658e-14 + (fConst0 * ((fConst0 * ((fConst0 * (4.10681387870386e-19 - fConst60)) - 3.47248472167364e-16)) - 6.43876014761958e-15)));
	fConst68 = ((fConst0 * (3.76495904425535e-13 + (fConst0 * (5.27605017210479e-16 + (fConst0 * (fConst62 - 4.51884894698696e-19)))))) - 2.06576933461033e-11);
	fConst69 = (3.66654389811605e-11 + (fConst0 * ((fConst0 * (1.49068310669626e-13 + (fConst0 * (4.32870793899841e-16 + (fConst0 * (fConst64 - 8.72000686086724e-19)))))) - 6.45050747048432e-12)));
	fConst70 = (6.20456521793295e-23 * fConst0);
	fConst71 = (3.81196836712471e-17 + (fConst0 * (3.77525356518785e-18 + (fConst0 * (fConst70 - 5.34336525043607e-20)))));
	fConst72 = (3.21328178777099e-23 * fConst0);
	fConst73 = (1.81754651744506e-16 + (fConst0 * (1.73435992252234e-17 + (fConst0 * (fConst72 - 6.68640256034821e-20)))));
	fConst74 = (3.53460996654809e-23 * fConst0);
	fConst75 = ((fConst0 * ((fConst0 * (9.40607374474749e-20 - fConst74)) - 4.2788606524867e-17)) - 1.86505675905608e-14);
	fConst76 = (6.82502173972625e-23 * fConst0);
	fConst77 = (1.21658564908235e-13 + (fConst0 * ((fConst0 * ((fConst0 * (9.83806255288369e-20 - fConst76)) - 2.31008826466573e-17)) - 4.05815884904672e-15)));
	fConst78 = (1.14359051013741e-15 + (fConst0 * ((fConst0 * ((fConst0 * (6.33514113681028e-20 - fConst70)) - 7.73549469521963e-18)) - 1.11773665270642e-16)));
	fConst79 = (5.45263955233518e-15 + (fConst0 * ((fConst0 * ((fConst0 * (7.20003329534729e-20 - fConst72)) - 1.95391890110555e-17)) - 3.57955975814928e-16)));
	fConst80 = ((fConst0 * (2.11801228617533e-14 + (fConst0 * (4.70251408743855e-17 + (fConst0 * (fConst74 - 9.97106755324649e-20)))))) - 1.14841059227862e-12);
	fConst81 = (2.02764274847059e-12 + (fConst0 * ((fConst0 * (8.35220070756327e-15 + (fConst0 * (3.09740836569766e-17 + (fConst0 * (fConst76 - 1.09290160278953e-19)))))) - 3.57982413190859e-13)));
	fConst82 = (8.1900260876715e-25 * fConst0);
	fConst83 = ((fConst0 * (1.35353700961115e-16 + (fConst0 * (5.28283211724887e-19 - fConst82)))) - 1.37862050569164e-15);
	fConst84 = (4.24153195985771e-25 * fConst0);
	fConst85 = ((fConst0 * (6.2161253914543e-16 + (fConst0 * (2.73764992161251e-19 - fConst84)))) - 6.57326257113772e-15);
	fConst86 = (4.66568515584348e-25 * fConst0);
	fConst87 = (6.68520524089348e-13 + (fConst0 * ((fConst0 * (fConst86 - 3.01231736738224e-19)) - 9.75013146423006e-16)));
	fConst88 = (9.00902869643864e-25 * fConst0);
	fConst89 = (1.46661755924642e-12 + (fConst0 * (1.45509781451064e-13 + (fConst0 * ((fConst0 * (fConst88 - 5.81285788771582e-19)) - 7.1089248778583e-16)))));
	fConst90 = (1.37862050569164e-14 + (fConst0 * (4.02806307880799e-15 + (fConst0 * ((fConst0 * (fConst82 - 5.28326849863888e-19)) - 2.76083406835409e-16)))));
	fConst91 = (6.57326257113772e-14 + (fConst0 * (1.28775202952392e-14 + (fConst0 * ((fConst0 * (fConst84 - 2.7378759191359e-19)) - 6.94496944334729e-16)))));
	fConst92 = ((fConst0 * ((fConst0 * (1.05521003442096e-15 + (fConst0 * (3.01256596465798e-19 - fConst86)))) - 7.5299180885107e-13)) - 1.37717955640688e-11);
	fConst93 = (7.3330877962321e-11 + (fConst0 * ((fConst0 * ((fConst0 * (8.65741587799681e-16 + (fConst0 * (5.81333790724482e-19 - fConst88)))) - 2.98136621339251e-13)) - 4.30033831365621e-12)));
	fConst94 = (1.24091304358659e-22 * fConst0);
	fConst95 = ((fConst0 * (7.5505071303757e-18 + (fConst0 * (3.56224350029072e-20 - fConst94)))) - 7.62393673424942e-17);
	fConst96 = (6.42656357554199e-23 * fConst0);
	fConst97 = ((fConst0 * (3.46871984504467e-17 + (fConst0 * (4.45760170689881e-20 - fConst96)))) - 3.63509303489012e-16);
	fConst98 = (7.06921993309619e-23 * fConst0);
	fConst99 = (3.73011351811216e-14 + (fConst0 * ((fConst0 * (fConst98 - 6.27071582983166e-20)) - 8.5577213049734e-17)));
	fConst100 = (1.36500434794525e-22 * fConst0);
	fConst101 = (8.11057099388236e-14 + (fConst0 * (8.11631769809345e-15 + (fConst0 * ((fConst0 * (fConst100 - 6.55870836858913e-20)) - 4.62017652933145e-17)))));
	fConst102 = (7.62393673424942e-16 + (fConst0 * (2.23547330541284e-16 + (fConst0 * ((fConst0 * (fConst94 - 4.22342742454019e-20)) - 1.54709893904393e-17)))));
	fConst103 = (3.63509303489012e-15 + (fConst0 * (7.15911951629856e-16 + (fConst0 * ((fConst0 * (fConst96 - 4.8000221968982e-20)) - 3.9078378022111e-17)))));
	fConst104 = ((fConst0 * ((fConst0 * (9.4050281748771e-17 + (fConst0 * (6.64737836883099e-20 - fConst98)))) - 4.23602457235067e-14)) - 7.65607061519077e-13);
	fConst105 = (4.05528549694118e-12 + (fConst0 * ((fConst0 * ((fConst0 * (6.19481673139533e-17 + (fConst0 * (7.28601068526355e-20 - fConst100)))) - 1.67044014151265e-14)) - 2.3865494212724e-13)));
	fConst106 = ((fConst0 * ((fConst0 * (5.28283211724887e-19 + fConst82)) - 1.35353700961115e-16)) - 1.37862050569164e-15);
	fConst107 = ((fConst0 * ((fConst0 * (2.73764992161251e-19 + fConst84)) - 6.2161253914543e-16)) - 6.57326257113772e-15);
	fConst108 = (6.68520524089348e-13 + (fConst0 * (9.75013146423006e-16 + (fConst0 * (0 - (3.01231736738224e-19 + fConst86))))));
	fConst109 = ((fConst0 * (1.45509781451064e-13 + (fConst0 * (7.1089248778583e-16 + (fConst0 * (0 - (5.81285788771582e-19 + fConst88))))))) - 1.46661755924642e-12);
	fConst110 = ((fConst0 * (4.02806307880799e-15 + (fConst0 * (2.76083406835409e-16 + (fConst0 * (0 - (5.28326849863888e-19 + fConst82))))))) - 1.37862050569164e-14);
	fConst111 = ((fConst0 * (1.28775202952392e-14 + (fConst0 * (6.94496944334729e-16 + (fConst0 * (0 - (2.7378759191359e-19 + fConst84))))))) - 6.57326257113772e-14);
	fConst112 = (1.37717955640688e-11 + (fConst0 * ((fConst0 * ((fConst0 * (3.01256596465798e-19 + fConst86)) - 1.05521003442096e-15)) - 7.5299180885107e-13)));
	fConst113 = (7.3330877962321e-11 + (fConst0 * (4.30033831365621e-12 + (fConst0 * ((fConst0 * ((fConst0 * (5.81333790724482e-19 + fConst88)) - 8.65741587799681e-16)) - 2.98136621339251e-13)))));
	fConst114 = ((fConst0 * ((fConst0 * (3.56224350029072e-20 + fConst94)) - 7.5505071303757e-18)) - 7.62393673424942e-17);
	fConst115 = ((fConst0 * ((fConst0 * (4.45760170689881e-20 + fConst96)) - 3.46871984504467e-17)) - 3.63509303489012e-16);
	fConst116 = (3.73011351811216e-14 + (fConst0 * (8.5577213049734e-17 + (fConst0 * (0 - (6.27071582983166e-20 + fConst98))))));
	fConst117 = ((fConst0 * (8.11631769809345e-15 + (fConst0 * (4.62017652933145e-17 + (fConst0 * (0 - (6.55870836858913e-20 + fConst100))))))) - 8.11057099388236e-14);
	fConst118 = ((fConst0 * (2.23547330541284e-16 + (fConst0 * (1.54709893904393e-17 + (fConst0 * (0 - (4.22342742454019e-20 + fConst94))))))) - 7.62393673424942e-16);
	fConst119 = ((fConst0 * (7.15911951629856e-16 + (fConst0 * (3.9078378022111e-17 + (fConst0 * (0 - (4.8000221968982e-20 + fConst96))))))) - 3.63509303489012e-15);
	fConst120 = (7.65607061519077e-13 + (fConst0 * ((fConst0 * ((fConst0 * (6.64737836883099e-20 + fConst98)) - 9.4050281748771e-17)) - 4.23602457235067e-14)));
	fConst121 = (4.05528549694118e-12 + (fConst0 * (2.3865494212724e-13 + (fConst0 * ((fConst0 * ((fConst0 * (7.28601068526355e-20 + fConst100)) - 6.19481673139533e-17)) - 1.67044014151265e-14)))));
	fConst122 = (6.89310252845818e-16 + (fConst0 * ((fConst0 * (0 - (7.92424817587331e-19 + fConst58))) - 6.76768504805577e-17)));
	fConst123 = (3.28663128556886e-15 + (fConst0 * ((fConst0 * (0 - (4.10647488241876e-19 + fConst60))) - 3.10806269572715e-16)));
	fConst124 = ((fConst0 * (4.87506573211503e-16 + (fConst0 * (4.51847605107335e-19 + fConst62)))) - 3.34260262044674e-13);
	fConst125 = ((fConst0 * ((fConst0 * (3.55446243892915e-16 + (fConst0 * (8.71928683157373e-19 + fConst64)))) - 7.27548907255322e-14)) - 2.19992633886963e-12);
	fConst126 = ((fConst0 * ((fConst0 * (1.38041703417704e-16 + (fConst0 * (7.92490274795832e-19 + fConst58)))) - 2.01403153940399e-15)) - 2.06793075853745e-14);
	fConst127 = ((fConst0 * ((fConst0 * (3.47248472167364e-16 + (fConst0 * (4.10681387870386e-19 + fConst60)))) - 6.43876014761958e-15)) - 9.85989385670658e-14);
	fConst128 = (2.06576933461033e-11 + (fConst0 * (3.76495904425535e-13 + (fConst0 * ((fConst0 * (0 - (4.51884894698696e-19 + fConst62))) - 5.27605017210479e-16)))));
	fConst129 = (3.66654389811605e-11 + (fConst0 * (6.45050747048432e-12 + (fConst0 * (1.49068310669626e-13 + (fConst0 * ((fConst0 * (0 - (8.72000686086724e-19 + fConst64))) - 4.32870793899841e-16)))))));
	fConst130 = (3.81196836712471e-17 + (fConst0 * ((fConst0 * (0 - (5.34336525043607e-20 + fConst70))) - 3.77525356518785e-18)));
	fConst131 = (1.81754651744506e-16 + (fConst0 * ((fConst0 * (0 - (6.68640256034821e-20 + fConst72))) - 1.73435992252234e-17)));
	fConst132 = ((fConst0 * (4.2788606524867e-17 + (fConst0 * (9.40607374474749e-20 + fConst74)))) - 1.86505675905608e-14);
	fConst133 = ((fConst0 * ((fConst0 * (2.31008826466573e-17 + (fConst0 * (9.83806255288369e-20 + fConst76)))) - 4.05815884904672e-15)) - 1.21658564908235e-13);
	fConst134 = ((fConst0 * ((fConst0 * (7.73549469521963e-18 + (fConst0 * (6.33514113681028e-20 + fConst70)))) - 1.11773665270642e-16)) - 1.14359051013741e-15);
	fConst135 = ((fConst0 * ((fConst0 * (1.95391890110555e-17 + (fConst0 * (7.20003329534729e-20 + fConst72)))) - 3.57955975814928e-16)) - 5.45263955233518e-15);
	fConst136 = (1.14841059227862e-12 + (fConst0 * (2.11801228617533e-14 + (fConst0 * ((fConst0 * (0 - (9.97106755324649e-20 + fConst74))) - 4.70251408743855e-17)))));
	fConst137 = (2.02764274847059e-12 + (fConst0 * (3.57982413190859e-13 + (fConst0 * (8.35220070756327e-15 + (fConst0 * ((fConst0 * (0 - (1.09290160278953e-19 + fConst76))) - 3.09740836569766e-17)))))));
	fConst138 = (3.95846827414905e-20 * fConst0);
	fConst139 = ((fConst0 * (fConst138 - 2.70608771023561e-15)) - 3.83098989908991e-15);
	fConst140 = (2.05005082000411e-20 * fConst0);
	fConst141 = ((fConst0 * (fConst140 - 1.2836617480244e-14)) - 1.82661598388607e-14);
	fConst142 = (3.43409359073666e-12 + (fConst0 * (1.28384379954594e-14 - fConst140)));
	fConst143 = ((fConst0 * (7.23925962947242e-13 + (fConst0 * (2.7096029653953e-15 - fConst138)))) - 1.14929696972697e-13);
	fConst144 = (2.61258906093837e-22 * fConst0);
	fConst145 = ((fConst0 * (1.48820277455438e-13 + (fConst0 * (2.98625810362321e-16 - fConst144)))) - 2.07824962983385e-12);
	fConst146 = ((fConst0 * (fConst144 - 2.98602609678267e-16)) - 6.92749876611283e-14);
	fConst147 = (1.35303354120271e-22 * fConst0);
	fConst148 = ((fConst0 * (fConst147 - 2.30115350547207e-16)) - 3.3030314116826e-13);
	fConst149 = (3.91581968496678e-13 + (fConst0 * (2.30127365947628e-16 - fConst147)));
	fConst150 = (2.6389788494327e-20 * fConst0);
	fConst151 = (7.66197979817981e-15 + (fConst0 * (0 - (5.41217542047122e-15 + fConst150))));
	fConst152 = (1.3667005466694e-20 * fConst0);
	fConst153 = (3.65323196777213e-14 + (fConst0 * (0 - (2.56732349604881e-14 + fConst152))));
	fConst154 = ((fConst0 * (2.56768759909188e-14 + fConst152)) - 6.86818718147332e-12);
	fConst155 = ((fConst0 * ((fConst0 * (5.41920593079061e-15 + fConst150)) - 1.44785192589448e-12)) - 7.66197979817981e-14);
	fConst156 = (1.74172604062558e-22 * fConst0);
	fConst157 = ((fConst0 * ((fConst0 * (5.97251620724643e-16 + fConst156)) - 2.97640554910877e-13)) - 1.38549975322257e-12);
	fConst158 = (1.38549975322257e-13 + (fConst0 * (0 - (5.97205219356535e-16 + fConst156))));
	fConst159 = (9.02022360801807e-23 * fConst0);
	fConst160 = (6.60606282336519e-13 + (fConst0 * (0 - (4.60230701094414e-16 + fConst159))));
	fConst161 = ((fConst0 * (4.60254731895257e-16 + fConst159)) - 7.83163936993356e-13);
	fConst162 = (7.66197979817981e-15 + (fConst0 * (5.41217542047122e-15 - fConst150)));
	fConst163 = (3.65323196777213e-14 + (fConst0 * (2.56732349604881e-14 - fConst152)));
	fConst164 = ((fConst0 * (fConst152 - 2.56768759909188e-14)) - 6.86818718147332e-12);
	fConst165 = (7.66197979817981e-14 + (fConst0 * ((fConst0 * (fConst150 - 5.41920593079061e-15)) - 1.44785192589448e-12)));
	fConst166 = (1.38549975322257e-12 + (fConst0 * ((fConst0 * (fConst156 - 5.97251620724643e-16)) - 2.97640554910877e-13)));
	fConst167 = (1.38549975322257e-13 + (fConst0 * (5.97205219356535e-16 - fConst156)));
	fConst168 = (6.60606282336519e-13 + (fConst0 * (4.60230701094414e-16 - fConst159)));
	fConst169 = ((fConst0 * (fConst159 - 4.60254731895257e-16)) - 7.83163936993356e-13);
	fConst170 = ((fConst0 * (2.70608771023561e-15 + fConst138)) - 3.83098989908991e-15);
	fConst171 = ((fConst0 * (1.2836617480244e-14 + fConst140)) - 1.82661598388607e-14);
	fConst172 = (3.43409359073666e-12 + (fConst0 * (0 - (1.28384379954594e-14 + fConst140))));
	fConst173 = (1.14929696972697e-13 + (fConst0 * (7.23925962947242e-13 + (fConst0 * (0 - (2.7096029653953e-15 + fConst138))))));
	fConst174 = (2.07824962983385e-12 + (fConst0 * (1.48820277455438e-13 + (fConst0 * (0 - (2.98625810362321e-16 + fConst144))))));
	fConst175 = ((fConst0 * (2.98602609678267e-16 + fConst144)) - 6.92749876611283e-14);
	fConst176 = ((fConst0 * (2.30115350547207e-16 + fConst147)) - 3.3030314116826e-13);
	fConst177 = (3.91581968496678e-13 + (fConst0 * (0 - (2.30127365947628e-16 + fConst147))));
	fConst178 = ((fConst0 * (0 - (2.70608771023561e-15 + fConst30))) - 3.83098989908991e-15);
	fConst179 = ((fConst0 * (0 - (1.2836617480244e-14 + fConst32))) - 1.82661598388607e-14);
	fConst180 = (3.43409359073666e-12 + (fConst0 * (1.28384379954594e-14 + fConst32)));
	fConst181 = (3.83098989908991e-14 + (fConst0 * (7.23925962947242e-13 + (fConst0 * (2.7096029653953e-15 + fConst30)))));
	fConst182 = (6.92749876611283e-13 + (fConst0 * (1.48820277455438e-13 + (fConst0 * (2.98625810362321e-16 + fConst36)))));
	fConst183 = ((fConst0 * (0 - (2.98602609678267e-16 + fConst36))) - 6.92749876611283e-14);
	fConst184 = ((fConst0 * (0 - (2.30115350547207e-16 + fConst39))) - 3.3030314116826e-13);
	fConst185 = (3.91581968496678e-13 + (fConst0 * (2.30127365947628e-16 + fConst39)));
	fConst186 = (1.96686017911516e-11 * fConst0);
	fConst187 = (fConst186 - 2.7766311400433e-05);
	fConst188 = (2.7766311400433e-05 + fConst186);
	fConst189 = (fConst0 / fConst4);
	clear_state_f();
}

void Dsp::init_static(uint32_t samplingFreq, PluginLV2 *p)
{
	static_cast<Dsp*>(p)->init(samplingFreq);
}

void always_inline Dsp::compute(int count, FAUSTFLOAT *input0, FAUSTFLOAT *output0)
{
#define fslider0 (*fslider0_)
#define fslider1 (*fslider1_)
#define fslider2 (*fslider2_)
#define fslider3 (*fslider3_)
#define fslider4 (*fslider4_)
	double 	fSlow0 = (0.007000000000000006 * double(fslider0));
	double 	fSlow1 = (0.007000000000000006 * double(fslider1));
	double 	fSlow2 = (0.007000000000000006 * double(fslider2));
	double 	fSlow3 = (0.00036676987543879196 * (exp((3 * double(fslider3))) - 1));
	double 	fSlow4 = (0.00036676987543879196 * (exp((3 * double(fslider4))) - 1));
	for (int i=0; i<count; i++) {
		fRec1[0] = (fSlow0 + (0.993 * fRec1[1]));
		fRec2[0] = (fSlow1 + (0.993 * fRec2[1]));
		fRec3[0] = (fSlow2 + (0.993 * fRec3[1]));
		fRec4[0] = (fSlow3 + (0.993 * fRec4[1]));
		double fTemp0 = (3.49641626124347e-11 + ((fRec4[0] * (1.93356012494155e-12 + ((fConst29 * fRec1[0]) + (fConst0 * (fConst28 + ((fRec2[0] * (fConst27 + (fConst26 * fRec1[0]))) + (fRec3[0] * (((fConst25 * fRec1[0]) + (fConst0 * (fConst23 + (fRec2[0] * (fConst21 + (fConst19 * fRec1[0])))))) - 1.93356012494155e-13)))))))) + ((fConst17 * fRec1[0]) + (fConst0 * (fConst16 + ((fRec2[0] * (fConst15 + (fConst14 * fRec1[0]))) + (fRec3[0] * (((fConst13 * fRec1[0]) + (fConst0 * (fConst11 + (fRec2[0] * (fConst9 + (fConst7 * fRec1[0])))))) - 3.49641626124347e-12))))))));
		fRec5[0] = ((double)input0[i] - ((((((fRec5[1] * (1.74820813062173e-10 + ((fRec4[0] * (9.66780062470777e-12 + ((fConst137 * fRec1[0]) + (fConst0 * (fConst136 + ((fRec2[0] * (fConst135 + (fConst134 * fRec1[0]))) + (fRec3[0] * (((fConst133 * fRec1[0]) + (fConst0 * (fConst132 + (fRec2[0] * (fConst131 + (fConst130 * fRec1[0])))))) - 5.80068037482466e-13)))))))) + ((fConst129 * fRec1[0]) + (fConst0 * (fConst128 + ((fRec2[0] * (fConst127 + (fConst126 * fRec1[0]))) + (fRec3[0] * (((fConst125 * fRec1[0]) + (fConst0 * (fConst124 + (fRec2[0] * (fConst123 + (fConst122 * fRec1[0])))))) - 1.04892487837304e-11))))))))) + (fRec5[2] * (3.49641626124347e-10 + ((fRec4[0] * (1.93356012494155e-11 + ((fConst121 * fRec1[0]) + (fConst0 * (fConst120 + ((fRec2[0] * (fConst119 + (fConst118 * fRec1[0]))) + (fRec3[0] * (((fConst117 * fRec1[0]) + (fConst0 * (fConst116 + (fRec2[0] * (fConst115 + (fConst114 * fRec1[0])))))) - 3.86712024988311e-13)))))))) + ((fConst113 * fRec1[0]) + (fConst0 * (fConst112 + ((fRec2[0] * (fConst111 + (fConst110 * fRec1[0]))) + (fRec3[0] * (((fConst109 * fRec1[0]) + (fConst0 * (fConst108 + (fRec2[0] * (fConst107 + (fConst106 * fRec1[0])))))) - 6.99283252248693e-12)))))))))) + (fRec5[3] * (3.49641626124347e-10 + ((fRec4[0] * (1.93356012494155e-11 + ((fConst105 * fRec1[0]) + (fConst0 * (fConst104 + ((fRec2[0] * (fConst103 + (fConst102 * fRec1[0]))) + (fRec3[0] * (3.86712024988311e-13 + ((fConst101 * fRec1[0]) + (fConst0 * (fConst99 + (fRec2[0] * (fConst97 + (fConst95 * fRec1[0])))))))))))))) + ((fConst93 * fRec1[0]) + (fConst0 * (fConst92 + ((fRec2[0] * (fConst91 + (fConst90 * fRec1[0]))) + (fRec3[0] * (6.99283252248693e-12 + ((fConst89 * fRec1[0]) + (fConst0 * (fConst87 + (fRec2[0] * (fConst85 + (fConst83 * fRec1[0])))))))))))))))) + (fRec5[4] * (1.74820813062173e-10 + ((fRec4[0] * (9.66780062470777e-12 + ((fConst81 * fRec1[0]) + (fConst0 * (fConst80 + ((fRec2[0] * (fConst79 + (fConst78 * fRec1[0]))) + (fRec3[0] * (5.80068037482466e-13 + ((fConst77 * fRec1[0]) + (fConst0 * (fConst75 + (fRec2[0] * (fConst73 + (fConst71 * fRec1[0])))))))))))))) + ((fConst69 * fRec1[0]) + (fConst0 * (fConst68 + ((fRec2[0] * (fConst67 + (fConst66 * fRec1[0]))) + (fRec3[0] * (1.04892487837304e-11 + ((fConst65 * fRec1[0]) + (fConst0 * (fConst63 + (fRec2[0] * (fConst61 + (fConst59 * fRec1[0])))))))))))))))) + (fRec5[5] * (3.49641626124347e-11 + ((fRec4[0] * (1.93356012494155e-12 + ((fConst57 * fRec1[0]) + (fConst0 * (fConst56 + ((fRec2[0] * (fConst55 + (fConst54 * fRec1[0]))) + (fRec3[0] * (1.93356012494155e-13 + ((fConst53 * fRec1[0]) + (fConst0 * (fConst52 + (fRec2[0] * (fConst51 + (fConst50 * fRec1[0])))))))))))))) + ((fConst49 * fRec1[0]) + (fConst0 * (fConst48 + ((fRec2[0] * (fConst47 + (fConst46 * fRec1[0]))) + (fRec3[0] * (3.49641626124347e-12 + ((fConst45 * fRec1[0]) + (fConst0 * (fConst44 + (fRec2[0] * (fConst43 + (fConst42 * fRec1[0])))))))))))))))) / fTemp0));
		double fTemp1 = (fConst0 * (((((((fRec5[0] * (3.3030314116826e-12 + ((fConst0 * (fConst185 + (fRec3[0] * (fConst184 + (fConst183 * fRec1[0]))))) + ((fConst182 * fRec1[0]) + (fRec4[0] * (1.82661598388607e-13 + ((fConst181 * fRec1[0]) + (fConst0 * (fConst180 + (fRec3[0] * (fConst179 + (fConst178 * fRec1[0])))))))))))) + (fRec5[1] * (9.90909423504778e-12 + ((fConst0 * (fConst177 + (fRec3[0] * (fConst176 + (fConst175 * fRec1[0]))))) + ((fConst174 * fRec1[0]) + (fRec4[0] * (5.4798479516582e-13 + ((fConst173 * fRec1[0]) + (fConst0 * (fConst172 + (fRec3[0] * (fConst171 + (fConst170 * fRec1[0]))))))))))))) + (fRec5[2] * (6.60606282336519e-12 + ((fConst0 * (fConst169 + (fRec3[0] * (fConst168 + (fConst167 * fRec1[0]))))) + ((fConst166 * fRec1[0]) + (fRec4[0] * (3.65323196777214e-13 + ((fConst165 * fRec1[0]) + (fConst0 * (fConst164 + (fRec3[0] * (fConst163 + (fConst162 * fRec1[0]))))))))))))) + (fRec5[3] * (((fConst0 * (fConst161 + (fRec3[0] * (fConst160 + (fConst158 * fRec1[0]))))) + ((fConst157 * fRec1[0]) + (fRec4[0] * (((fConst155 * fRec1[0]) + (fConst0 * (fConst154 + (fRec3[0] * (fConst153 + (fConst151 * fRec1[0])))))) - 3.65323196777214e-13)))) - 6.60606282336519e-12))) + (fRec5[4] * (((fConst0 * (fConst149 + (fRec3[0] * (fConst148 + (fConst146 * fRec1[0]))))) + ((fConst145 * fRec1[0]) + (fRec4[0] * (((fConst143 * fRec1[0]) + (fConst0 * (fConst142 + (fRec3[0] * (fConst141 + (fConst139 * fRec1[0])))))) - 5.4798479516582e-13)))) - 9.90909423504778e-12))) + (fRec5[5] * (((fConst0 * (fConst41 + (fRec3[0] * (fConst40 + (fConst38 * fRec1[0]))))) + ((fConst37 * fRec1[0]) + (fRec4[0] * (((fConst35 * fRec1[0]) + (fConst0 * (fConst34 + (fRec3[0] * (fConst33 + (fConst31 * fRec1[0])))))) - 1.82661598388607e-13)))) - 3.3030314116826e-12))) / fTemp0));
		fRec0[0] = (((int(std::signbit(fTemp1)))?janray_negclip(fTemp1):janrayclip(fTemp1)) - (fConst5 * ((fConst3 * fRec0[1]) + (fConst2 * fRec0[2]))));
		fRec6[0] = (fSlow4 + (0.993 * fRec6[1]));
		output0[i] = (FAUSTFLOAT)(fConst189 * ((fConst0 * (fRec0[1] * (0 - (3.93372035823031e-11 * fRec6[0])))) + (fRec6[0] * ((fConst188 * fRec0[0]) + (fConst187 * fRec0[2])))));
		// post processing
		fRec6[1] = fRec6[0];
		fRec0[2] = fRec0[1]; fRec0[1] = fRec0[0];
		for (int i=5; i>0; i--) fRec5[i] = fRec5[i-1];
		fRec4[1] = fRec4[0];
		fRec3[1] = fRec3[0];
		fRec2[1] = fRec2[0];
		fRec1[1] = fRec1[0];
	}
#undef fslider0
#undef fslider1
#undef fslider2
#undef fslider3
#undef fslider4
}

void __rt_func Dsp::compute_static(int count, FAUSTFLOAT *input0, FAUSTFLOAT *output0, PluginLV2 *p)
{
	static_cast<Dsp*>(p)->compute(count, input0, output0);
}


void Dsp::connect(uint32_t port,void* data)
{
	switch ((PortIndex)port)
	{
	case BASS: 
		fslider2_ = (float*)data; // , 0.5, 0.0, 1.0, 0.01 
		break;
	case GAIN: 
		fslider3_ = (float*)data; // , 0.5, 0.0, 1.0, 0.01 
		break;
	case TREBLE: 
		fslider1_ = (float*)data; // , 0.5, 0.0, 1.0, 0.01 
		break;
	case TRIM: 
		fslider0_ = (float*)data; // , 0.5, 0.0, 1.0, 0.01 
		break;
	case VOLUME: 
		fslider4_ = (float*)data; // , 0.5, 0.0, 1.0, 0.01 
		break;
	default:
		break;
	}
}

void Dsp::connect_static(uint32_t port,void* data, PluginLV2 *p)
{
	static_cast<Dsp*>(p)->connect(port, data);
}


PluginLV2 *plugin() {
	return new Dsp();
}

void Dsp::del_instance(PluginLV2 *p)
{
	delete static_cast<Dsp*>(p);
}

/*
typedef enum
{
   BASS, 
   GAIN, 
   TREBLE, 
   TRIM, 
   VOLUME, 
} PortIndex;
*/

} // end namespace timray
