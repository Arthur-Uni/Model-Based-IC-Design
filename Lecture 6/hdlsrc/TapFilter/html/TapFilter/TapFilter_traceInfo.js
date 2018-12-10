function RTW_Sid2UrlHash() {
	this.urlHashMap = new Array();
	/* <S1>/Add */
	this.urlHashMap["TapFilter:6"] = "Filter.vhd:93";
	/* <S1>/Delay */
	this.urlHashMap["TapFilter:3"] = "Filter.vhd:76";
	/* <S1>/Gain */
	this.urlHashMap["TapFilter:4"] = "Filter.vhd:72";
	/* <S1>/Gain1 */
	this.urlHashMap["TapFilter:5"] = "Filter.vhd:89";
	this.getUrlHash = function(sid) { return this.urlHashMap[sid];}
}
RTW_Sid2UrlHash.instance = new RTW_Sid2UrlHash();
function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "TapFilter"};
	this.sidHashMap["TapFilter"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<S1>/In1"] = {sid: "TapFilter:9"};
	this.sidHashMap["TapFilter:9"] = {rtwname: "<S1>/In1"};
	this.rtwnameHashMap["<S1>/Add"] = {sid: "TapFilter:6"};
	this.sidHashMap["TapFilter:6"] = {rtwname: "<S1>/Add"};
	this.rtwnameHashMap["<S1>/Delay"] = {sid: "TapFilter:3"};
	this.sidHashMap["TapFilter:3"] = {rtwname: "<S1>/Delay"};
	this.rtwnameHashMap["<S1>/Gain"] = {sid: "TapFilter:4"};
	this.sidHashMap["TapFilter:4"] = {rtwname: "<S1>/Gain"};
	this.rtwnameHashMap["<S1>/Gain1"] = {sid: "TapFilter:5"};
	this.sidHashMap["TapFilter:5"] = {rtwname: "<S1>/Gain1"};
	this.rtwnameHashMap["<S1>/Out1"] = {sid: "TapFilter:10"};
	this.sidHashMap["TapFilter:10"] = {rtwname: "<S1>/Out1"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();
