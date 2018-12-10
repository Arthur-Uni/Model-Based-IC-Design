function RTW_Sid2UrlHash() {
	this.urlHashMap = new Array();
	/* <S1>/Add */
	this.urlHashMap["DirectForm_2016a:9"] = "DirectForm.vhd:169";
	/* <S1>/Add1 */
	this.urlHashMap["DirectForm_2016a:10"] = "DirectForm.vhd:175";
	/* <S1>/Add2 */
	this.urlHashMap["DirectForm_2016a:11"] = "DirectForm.vhd:181";
	/* <S1>/Constant */
	this.urlHashMap["DirectForm_2016a:8"] = "DirectForm.vhd:136";
	/* <S1>/Constant1 */
	this.urlHashMap["DirectForm_2016a:14"] = "DirectForm.vhd:127";
	/* <S1>/Constant2 */
	this.urlHashMap["DirectForm_2016a:16"] = "DirectForm.vhd:124";
	/* <S1>/Constant3 */
	this.urlHashMap["DirectForm_2016a:18"] = "DirectForm.vhd:91";
	/* <S1>/Delay */
	this.urlHashMap["DirectForm_2016a:3"] = "DirectForm.vhd:98";
	/* <S1>/Delay1 */
	this.urlHashMap["DirectForm_2016a:4"] = "DirectForm.vhd:111";
	/* <S1>/Delay2 */
	this.urlHashMap["DirectForm_2016a:5"] = "DirectForm.vhd:139";
	/* <S1>/Product */
	this.urlHashMap["DirectForm_2016a:7"] = "DirectForm.vhd:162";
	/* <S1>/Product1 */
	this.urlHashMap["DirectForm_2016a:15"] = "DirectForm.vhd:130";
	/* <S1>/Product2 */
	this.urlHashMap["DirectForm_2016a:17"] = "DirectForm.vhd:158";
	/* <S1>/Product3 */
	this.urlHashMap["DirectForm_2016a:19"] = "DirectForm.vhd:152";
	this.getUrlHash = function(sid) { return this.urlHashMap[sid];}
}
RTW_Sid2UrlHash.instance = new RTW_Sid2UrlHash();
function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "DirectForm_2016a"};
	this.sidHashMap["DirectForm_2016a"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<S1>/In1"] = {sid: "DirectForm_2016a:26"};
	this.sidHashMap["DirectForm_2016a:26"] = {rtwname: "<S1>/In1"};
	this.rtwnameHashMap["<S1>/Add"] = {sid: "DirectForm_2016a:9"};
	this.sidHashMap["DirectForm_2016a:9"] = {rtwname: "<S1>/Add"};
	this.rtwnameHashMap["<S1>/Add1"] = {sid: "DirectForm_2016a:10"};
	this.sidHashMap["DirectForm_2016a:10"] = {rtwname: "<S1>/Add1"};
	this.rtwnameHashMap["<S1>/Add2"] = {sid: "DirectForm_2016a:11"};
	this.sidHashMap["DirectForm_2016a:11"] = {rtwname: "<S1>/Add2"};
	this.rtwnameHashMap["<S1>/Constant"] = {sid: "DirectForm_2016a:8"};
	this.sidHashMap["DirectForm_2016a:8"] = {rtwname: "<S1>/Constant"};
	this.rtwnameHashMap["<S1>/Constant1"] = {sid: "DirectForm_2016a:14"};
	this.sidHashMap["DirectForm_2016a:14"] = {rtwname: "<S1>/Constant1"};
	this.rtwnameHashMap["<S1>/Constant2"] = {sid: "DirectForm_2016a:16"};
	this.sidHashMap["DirectForm_2016a:16"] = {rtwname: "<S1>/Constant2"};
	this.rtwnameHashMap["<S1>/Constant3"] = {sid: "DirectForm_2016a:18"};
	this.sidHashMap["DirectForm_2016a:18"] = {rtwname: "<S1>/Constant3"};
	this.rtwnameHashMap["<S1>/Delay"] = {sid: "DirectForm_2016a:3"};
	this.sidHashMap["DirectForm_2016a:3"] = {rtwname: "<S1>/Delay"};
	this.rtwnameHashMap["<S1>/Delay1"] = {sid: "DirectForm_2016a:4"};
	this.sidHashMap["DirectForm_2016a:4"] = {rtwname: "<S1>/Delay1"};
	this.rtwnameHashMap["<S1>/Delay2"] = {sid: "DirectForm_2016a:5"};
	this.sidHashMap["DirectForm_2016a:5"] = {rtwname: "<S1>/Delay2"};
	this.rtwnameHashMap["<S1>/Product"] = {sid: "DirectForm_2016a:7"};
	this.sidHashMap["DirectForm_2016a:7"] = {rtwname: "<S1>/Product"};
	this.rtwnameHashMap["<S1>/Product1"] = {sid: "DirectForm_2016a:15"};
	this.sidHashMap["DirectForm_2016a:15"] = {rtwname: "<S1>/Product1"};
	this.rtwnameHashMap["<S1>/Product2"] = {sid: "DirectForm_2016a:17"};
	this.sidHashMap["DirectForm_2016a:17"] = {rtwname: "<S1>/Product2"};
	this.rtwnameHashMap["<S1>/Product3"] = {sid: "DirectForm_2016a:19"};
	this.sidHashMap["DirectForm_2016a:19"] = {rtwname: "<S1>/Product3"};
	this.rtwnameHashMap["<S1>/Out1"] = {sid: "DirectForm_2016a:27"};
	this.sidHashMap["DirectForm_2016a:27"] = {rtwname: "<S1>/Out1"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();
