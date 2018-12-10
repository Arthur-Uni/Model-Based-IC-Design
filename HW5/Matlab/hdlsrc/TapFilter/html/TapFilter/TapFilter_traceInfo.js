function RTW_Sid2UrlHash() {
	this.urlHashMap = new Array();
	/* <S1>/Add */
	this.urlHashMap["TapFilter:44"] = "Fixed.vhd:95";
	/* <S1>/Delay */
	this.urlHashMap["TapFilter:15"] = "Fixed.vhd:78";
	/* <S1>/Gain */
	this.urlHashMap["TapFilter:16"] = "Fixed.vhd:73";
	/* <S1>/Gain1 */
	this.urlHashMap["TapFilter:17"] = "Fixed.vhd:91";
	this.getUrlHash = function(sid) { return this.urlHashMap[sid];}
}
RTW_Sid2UrlHash.instance = new RTW_Sid2UrlHash();
function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "TapFilter"};
	this.sidHashMap["TapFilter"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<S1>/In1"] = {sid: "TapFilter:13"};
	this.sidHashMap["TapFilter:13"] = {rtwname: "<S1>/In1"};
	this.rtwnameHashMap["<S1>/Add"] = {sid: "TapFilter:44"};
	this.sidHashMap["TapFilter:44"] = {rtwname: "<S1>/Add"};
	this.rtwnameHashMap["<S1>/Delay"] = {sid: "TapFilter:15"};
	this.sidHashMap["TapFilter:15"] = {rtwname: "<S1>/Delay"};
	this.rtwnameHashMap["<S1>/Gain"] = {sid: "TapFilter:16"};
	this.sidHashMap["TapFilter:16"] = {rtwname: "<S1>/Gain"};
	this.rtwnameHashMap["<S1>/Gain1"] = {sid: "TapFilter:17"};
	this.sidHashMap["TapFilter:17"] = {rtwname: "<S1>/Gain1"};
	this.rtwnameHashMap["<S1>/Out1"] = {sid: "TapFilter:18"};
	this.sidHashMap["TapFilter:18"] = {rtwname: "<S1>/Out1"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();
