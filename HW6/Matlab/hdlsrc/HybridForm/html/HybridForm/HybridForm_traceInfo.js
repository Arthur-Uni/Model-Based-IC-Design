function RTW_Sid2UrlHash() {
	this.urlHashMap = new Array();
	/* <S1>/Add */
	this.urlHashMap["HybridForm:6"] = "HybridForm.vhd:137";
	/* <S1>/Add1 */
	this.urlHashMap["HybridForm:7"] = "HybridForm.vhd:175";
	/* <S1>/Add2 */
	this.urlHashMap["HybridForm:8"] = "HybridForm.vhd:181";
	/* <S1>/Constant */
	this.urlHashMap["HybridForm:9"] = "HybridForm.vhd:127";
	/* <S1>/Constant1 */
	this.urlHashMap["HybridForm:10"] = "HybridForm.vhd:118";
	/* <S1>/Constant2 */
	this.urlHashMap["HybridForm:11"] = "HybridForm.vhd:111";
	/* <S1>/Constant3 */
	this.urlHashMap["HybridForm:12"] = "HybridForm.vhd:91";
	/* <S1>/Delay */
	this.urlHashMap["HybridForm:13"] = "HybridForm.vhd:98";
	/* <S1>/Delay1 */
	this.urlHashMap["HybridForm:14"] = "HybridForm.vhd:162";
	/* <S1>/Delay2 */
	this.urlHashMap["HybridForm:15"] = "HybridForm.vhd:143";
	/* <S1>/Product */
	this.urlHashMap["HybridForm:16"] = "HybridForm.vhd:130";
	/* <S1>/Product1 */
	this.urlHashMap["HybridForm:17"] = "HybridForm.vhd:121";
	/* <S1>/Product2 */
	this.urlHashMap["HybridForm:18"] = "HybridForm.vhd:114";
	/* <S1>/Product3 */
	this.urlHashMap["HybridForm:19"] = "HybridForm.vhd:156";
	this.getUrlHash = function(sid) { return this.urlHashMap[sid];}
}
RTW_Sid2UrlHash.instance = new RTW_Sid2UrlHash();
function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "HybridForm"};
	this.sidHashMap["HybridForm"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<S1>/In1"] = {sid: "HybridForm:5"};
	this.sidHashMap["HybridForm:5"] = {rtwname: "<S1>/In1"};
	this.rtwnameHashMap["<S1>/Add"] = {sid: "HybridForm:6"};
	this.sidHashMap["HybridForm:6"] = {rtwname: "<S1>/Add"};
	this.rtwnameHashMap["<S1>/Add1"] = {sid: "HybridForm:7"};
	this.sidHashMap["HybridForm:7"] = {rtwname: "<S1>/Add1"};
	this.rtwnameHashMap["<S1>/Add2"] = {sid: "HybridForm:8"};
	this.sidHashMap["HybridForm:8"] = {rtwname: "<S1>/Add2"};
	this.rtwnameHashMap["<S1>/Constant"] = {sid: "HybridForm:9"};
	this.sidHashMap["HybridForm:9"] = {rtwname: "<S1>/Constant"};
	this.rtwnameHashMap["<S1>/Constant1"] = {sid: "HybridForm:10"};
	this.sidHashMap["HybridForm:10"] = {rtwname: "<S1>/Constant1"};
	this.rtwnameHashMap["<S1>/Constant2"] = {sid: "HybridForm:11"};
	this.sidHashMap["HybridForm:11"] = {rtwname: "<S1>/Constant2"};
	this.rtwnameHashMap["<S1>/Constant3"] = {sid: "HybridForm:12"};
	this.sidHashMap["HybridForm:12"] = {rtwname: "<S1>/Constant3"};
	this.rtwnameHashMap["<S1>/Delay"] = {sid: "HybridForm:13"};
	this.sidHashMap["HybridForm:13"] = {rtwname: "<S1>/Delay"};
	this.rtwnameHashMap["<S1>/Delay1"] = {sid: "HybridForm:14"};
	this.sidHashMap["HybridForm:14"] = {rtwname: "<S1>/Delay1"};
	this.rtwnameHashMap["<S1>/Delay2"] = {sid: "HybridForm:15"};
	this.sidHashMap["HybridForm:15"] = {rtwname: "<S1>/Delay2"};
	this.rtwnameHashMap["<S1>/Product"] = {sid: "HybridForm:16"};
	this.sidHashMap["HybridForm:16"] = {rtwname: "<S1>/Product"};
	this.rtwnameHashMap["<S1>/Product1"] = {sid: "HybridForm:17"};
	this.sidHashMap["HybridForm:17"] = {rtwname: "<S1>/Product1"};
	this.rtwnameHashMap["<S1>/Product2"] = {sid: "HybridForm:18"};
	this.sidHashMap["HybridForm:18"] = {rtwname: "<S1>/Product2"};
	this.rtwnameHashMap["<S1>/Product3"] = {sid: "HybridForm:19"};
	this.sidHashMap["HybridForm:19"] = {rtwname: "<S1>/Product3"};
	this.rtwnameHashMap["<S1>/Out1"] = {sid: "HybridForm:20"};
	this.sidHashMap["HybridForm:20"] = {rtwname: "<S1>/Out1"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();
