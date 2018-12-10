function RTW_Sid2UrlHash() {
	this.urlHashMap = new Array();
	/* <S1>/Add */
	this.urlHashMap["overflow_and_saturation:33"] = "Overflow_Detection_and_Saturation_4_bit_adder.vhd:92";
	/* <S1>/Multiport
Switch */
	this.urlHashMap["overflow_and_saturation:36"] = "Overflow_Detection_and_Saturation_4_bit_adder.vhd:98";
	/* <S1>/overflow detection */
	this.urlHashMap["overflow_and_saturation:31"] = "Overflow_Detection_and_Saturation_4_bit_adder.vhd:73";
	/* <S1>/saturation out */
	this.urlHashMap["overflow_and_saturation:35"] = "Overflow_Detection_and_Saturation_4_bit_adder.vhd:80";
	/* <S2>:1 */
	this.urlHashMap["overflow_and_saturation:31:1"] = "overflow_detection.vhd:59";
	/* <S2>:1:3 */
	this.urlHashMap["overflow_and_saturation:31:1:3"] = "overflow_detection.vhd:60";
	/* <S2>:1:4 */
	this.urlHashMap["overflow_and_saturation:31:1:4"] = "overflow_detection.vhd:62";
	/* <S2>:1:5 */
	this.urlHashMap["overflow_and_saturation:31:1:5"] = "overflow_detection.vhd:64";
	/* <S2>:1:6 */
	this.urlHashMap["overflow_and_saturation:31:1:6"] = "overflow_detection.vhd:66";
	/* <S2>:1:8 */
	this.urlHashMap["overflow_and_saturation:31:1:8"] = "overflow_detection.vhd:68";
	/* <S2>:1:9 */
	this.urlHashMap["overflow_and_saturation:31:1:9"] = "overflow_detection.vhd:70";
	/* <S2>:1:10 */
	this.urlHashMap["overflow_and_saturation:31:1:10"] = "overflow_detection.vhd:72";
	/* <S2>:1:11 */
	this.urlHashMap["overflow_and_saturation:31:1:11"] = "overflow_detection.vhd:74";
	/* <S2>:1:13 */
	this.urlHashMap["overflow_and_saturation:31:1:13"] = "overflow_detection.vhd:76";
	/* <S2>:1:15 */
	this.urlHashMap["overflow_and_saturation:31:1:15"] = "overflow_detection.vhd:78";
	/* <S2>:1:16 */
	this.urlHashMap["overflow_and_saturation:31:1:16"] = "overflow_detection.vhd:80";
	/* <S2>:1:17 */
	this.urlHashMap["overflow_and_saturation:31:1:17"] = "overflow_detection.vhd:82";
	/* <S2>:1:19 */
	this.urlHashMap["overflow_and_saturation:31:1:19"] = "overflow_detection.vhd:84";
	/* <S2>:1:20 */
	this.urlHashMap["overflow_and_saturation:31:1:20"] = "overflow_detection.vhd:86";
	/* <S2>:1:21 */
	this.urlHashMap["overflow_and_saturation:31:1:21"] = "overflow_detection.vhd:88";
	/* <S2>:1:23 */
	this.urlHashMap["overflow_and_saturation:31:1:23"] = "overflow_detection.vhd:90";
	/* <S2>:1:24 */
	this.urlHashMap["overflow_and_saturation:31:1:24"] = "overflow_detection.vhd:92";
	/* <S2>:1:25 */
	this.urlHashMap["overflow_and_saturation:31:1:25"] = "overflow_detection.vhd:94";
	/* <S2>:1:27 */
	this.urlHashMap["overflow_and_saturation:31:1:27"] = "overflow_detection.vhd:96";
	/* <S3>:1 */
	this.urlHashMap["overflow_and_saturation:35:1"] = "saturation_out.vhd:47";
	/* <S3>:1:3 */
	this.urlHashMap["overflow_and_saturation:35:1:3"] = "saturation_out.vhd:48";
	/* <S3>:1:4 */
	this.urlHashMap["overflow_and_saturation:35:1:4"] = "saturation_out.vhd:50";
	/* <S3>:1:6 */
	this.urlHashMap["overflow_and_saturation:35:1:6"] = "saturation_out.vhd:53";
	/* <S3>:1:8 */
	this.urlHashMap["overflow_and_saturation:35:1:8"] = "saturation_out.vhd:55";
	/* <S3>:1:10 */
	this.urlHashMap["overflow_and_saturation:35:1:10"] = "saturation_out.vhd:58";
	/* <S3>:1:13 */
	this.urlHashMap["overflow_and_saturation:35:1:13"] = "saturation_out.vhd:62";
	this.getUrlHash = function(sid) { return this.urlHashMap[sid];}
}
RTW_Sid2UrlHash.instance = new RTW_Sid2UrlHash();
function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "overflow_and_saturation"};
	this.sidHashMap["overflow_and_saturation"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<S1>/In1"] = {sid: "overflow_and_saturation:56"};
	this.sidHashMap["overflow_and_saturation:56"] = {rtwname: "<S1>/In1"};
	this.rtwnameHashMap["<S1>/In2"] = {sid: "overflow_and_saturation:57"};
	this.sidHashMap["overflow_and_saturation:57"] = {rtwname: "<S1>/In2"};
	this.rtwnameHashMap["<S1>/Add"] = {sid: "overflow_and_saturation:33"};
	this.sidHashMap["overflow_and_saturation:33"] = {rtwname: "<S1>/Add"};
	this.rtwnameHashMap["<S1>/Multiport Switch"] = {sid: "overflow_and_saturation:36"};
	this.sidHashMap["overflow_and_saturation:36"] = {rtwname: "<S1>/Multiport Switch"};
	this.rtwnameHashMap["<S1>/overflow detection"] = {sid: "overflow_and_saturation:31"};
	this.sidHashMap["overflow_and_saturation:31"] = {rtwname: "<S1>/overflow detection"};
	this.rtwnameHashMap["<S1>/saturation out"] = {sid: "overflow_and_saturation:35"};
	this.sidHashMap["overflow_and_saturation:35"] = {rtwname: "<S1>/saturation out"};
	this.rtwnameHashMap["<S1>/Out1"] = {sid: "overflow_and_saturation:58"};
	this.sidHashMap["overflow_and_saturation:58"] = {rtwname: "<S1>/Out1"};
	this.rtwnameHashMap["<S2>:1"] = {sid: "overflow_and_saturation:31:1"};
	this.sidHashMap["overflow_and_saturation:31:1"] = {rtwname: "<S2>:1"};
	this.rtwnameHashMap["<S2>:1:3"] = {sid: "overflow_and_saturation:31:1:3"};
	this.sidHashMap["overflow_and_saturation:31:1:3"] = {rtwname: "<S2>:1:3"};
	this.rtwnameHashMap["<S2>:1:4"] = {sid: "overflow_and_saturation:31:1:4"};
	this.sidHashMap["overflow_and_saturation:31:1:4"] = {rtwname: "<S2>:1:4"};
	this.rtwnameHashMap["<S2>:1:5"] = {sid: "overflow_and_saturation:31:1:5"};
	this.sidHashMap["overflow_and_saturation:31:1:5"] = {rtwname: "<S2>:1:5"};
	this.rtwnameHashMap["<S2>:1:6"] = {sid: "overflow_and_saturation:31:1:6"};
	this.sidHashMap["overflow_and_saturation:31:1:6"] = {rtwname: "<S2>:1:6"};
	this.rtwnameHashMap["<S2>:1:8"] = {sid: "overflow_and_saturation:31:1:8"};
	this.sidHashMap["overflow_and_saturation:31:1:8"] = {rtwname: "<S2>:1:8"};
	this.rtwnameHashMap["<S2>:1:9"] = {sid: "overflow_and_saturation:31:1:9"};
	this.sidHashMap["overflow_and_saturation:31:1:9"] = {rtwname: "<S2>:1:9"};
	this.rtwnameHashMap["<S2>:1:10"] = {sid: "overflow_and_saturation:31:1:10"};
	this.sidHashMap["overflow_and_saturation:31:1:10"] = {rtwname: "<S2>:1:10"};
	this.rtwnameHashMap["<S2>:1:11"] = {sid: "overflow_and_saturation:31:1:11"};
	this.sidHashMap["overflow_and_saturation:31:1:11"] = {rtwname: "<S2>:1:11"};
	this.rtwnameHashMap["<S2>:1:13"] = {sid: "overflow_and_saturation:31:1:13"};
	this.sidHashMap["overflow_and_saturation:31:1:13"] = {rtwname: "<S2>:1:13"};
	this.rtwnameHashMap["<S2>:1:15"] = {sid: "overflow_and_saturation:31:1:15"};
	this.sidHashMap["overflow_and_saturation:31:1:15"] = {rtwname: "<S2>:1:15"};
	this.rtwnameHashMap["<S2>:1:16"] = {sid: "overflow_and_saturation:31:1:16"};
	this.sidHashMap["overflow_and_saturation:31:1:16"] = {rtwname: "<S2>:1:16"};
	this.rtwnameHashMap["<S2>:1:17"] = {sid: "overflow_and_saturation:31:1:17"};
	this.sidHashMap["overflow_and_saturation:31:1:17"] = {rtwname: "<S2>:1:17"};
	this.rtwnameHashMap["<S2>:1:19"] = {sid: "overflow_and_saturation:31:1:19"};
	this.sidHashMap["overflow_and_saturation:31:1:19"] = {rtwname: "<S2>:1:19"};
	this.rtwnameHashMap["<S2>:1:20"] = {sid: "overflow_and_saturation:31:1:20"};
	this.sidHashMap["overflow_and_saturation:31:1:20"] = {rtwname: "<S2>:1:20"};
	this.rtwnameHashMap["<S2>:1:21"] = {sid: "overflow_and_saturation:31:1:21"};
	this.sidHashMap["overflow_and_saturation:31:1:21"] = {rtwname: "<S2>:1:21"};
	this.rtwnameHashMap["<S2>:1:23"] = {sid: "overflow_and_saturation:31:1:23"};
	this.sidHashMap["overflow_and_saturation:31:1:23"] = {rtwname: "<S2>:1:23"};
	this.rtwnameHashMap["<S2>:1:24"] = {sid: "overflow_and_saturation:31:1:24"};
	this.sidHashMap["overflow_and_saturation:31:1:24"] = {rtwname: "<S2>:1:24"};
	this.rtwnameHashMap["<S2>:1:25"] = {sid: "overflow_and_saturation:31:1:25"};
	this.sidHashMap["overflow_and_saturation:31:1:25"] = {rtwname: "<S2>:1:25"};
	this.rtwnameHashMap["<S2>:1:27"] = {sid: "overflow_and_saturation:31:1:27"};
	this.sidHashMap["overflow_and_saturation:31:1:27"] = {rtwname: "<S2>:1:27"};
	this.rtwnameHashMap["<S3>:1"] = {sid: "overflow_and_saturation:35:1"};
	this.sidHashMap["overflow_and_saturation:35:1"] = {rtwname: "<S3>:1"};
	this.rtwnameHashMap["<S3>:1:3"] = {sid: "overflow_and_saturation:35:1:3"};
	this.sidHashMap["overflow_and_saturation:35:1:3"] = {rtwname: "<S3>:1:3"};
	this.rtwnameHashMap["<S3>:1:4"] = {sid: "overflow_and_saturation:35:1:4"};
	this.sidHashMap["overflow_and_saturation:35:1:4"] = {rtwname: "<S3>:1:4"};
	this.rtwnameHashMap["<S3>:1:6"] = {sid: "overflow_and_saturation:35:1:6"};
	this.sidHashMap["overflow_and_saturation:35:1:6"] = {rtwname: "<S3>:1:6"};
	this.rtwnameHashMap["<S3>:1:8"] = {sid: "overflow_and_saturation:35:1:8"};
	this.sidHashMap["overflow_and_saturation:35:1:8"] = {rtwname: "<S3>:1:8"};
	this.rtwnameHashMap["<S3>:1:10"] = {sid: "overflow_and_saturation:35:1:10"};
	this.sidHashMap["overflow_and_saturation:35:1:10"] = {rtwname: "<S3>:1:10"};
	this.rtwnameHashMap["<S3>:1:13"] = {sid: "overflow_and_saturation:35:1:13"};
	this.sidHashMap["overflow_and_saturation:35:1:13"] = {rtwname: "<S3>:1:13"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();
