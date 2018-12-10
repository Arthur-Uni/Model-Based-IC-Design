function RTW_Sid2UrlHash() {
	this.urlHashMap = new Array();
	/* <S1>/Add */
	this.urlHashMap["Selector:2"] = "Subsystem.vhd:66";
	/* <S1>/Constant4 */
	this.urlHashMap["Selector:14"] = "Subsystem.vhd:61";
	/* <S1>/Data Type Conversion */
	this.urlHashMap["Selector:28"] = "Subsystem.vhd:63";
	/* <S1>/Multiport
Switch */
	this.urlHashMap["Selector:1"] = "Subsystem.vhd:86";
	this.getUrlHash = function(sid) { return this.urlHashMap[sid];}
}
RTW_Sid2UrlHash.instance = new RTW_Sid2UrlHash();
function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "Selector"};
	this.sidHashMap["Selector"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<S1>/In1"] = {sid: "Selector:18"};
	this.sidHashMap["Selector:18"] = {rtwname: "<S1>/In1"};
	this.rtwnameHashMap["<S1>/In2"] = {sid: "Selector:19"};
	this.sidHashMap["Selector:19"] = {rtwname: "<S1>/In2"};
	this.rtwnameHashMap["<S1>/In3"] = {sid: "Selector:20"};
	this.sidHashMap["Selector:20"] = {rtwname: "<S1>/In3"};
	this.rtwnameHashMap["<S1>/In4"] = {sid: "Selector:21"};
	this.sidHashMap["Selector:21"] = {rtwname: "<S1>/In4"};
	this.rtwnameHashMap["<S1>/In5"] = {sid: "Selector:22"};
	this.sidHashMap["Selector:22"] = {rtwname: "<S1>/In5"};
	this.rtwnameHashMap["<S1>/Add"] = {sid: "Selector:2"};
	this.sidHashMap["Selector:2"] = {rtwname: "<S1>/Add"};
	this.rtwnameHashMap["<S1>/Constant4"] = {sid: "Selector:14"};
	this.sidHashMap["Selector:14"] = {rtwname: "<S1>/Constant4"};
	this.rtwnameHashMap["<S1>/Data Type Conversion"] = {sid: "Selector:28"};
	this.sidHashMap["Selector:28"] = {rtwname: "<S1>/Data Type Conversion"};
	this.rtwnameHashMap["<S1>/Multiport Switch"] = {sid: "Selector:1"};
	this.sidHashMap["Selector:1"] = {rtwname: "<S1>/Multiport Switch"};
	this.rtwnameHashMap["<S1>/Out1"] = {sid: "Selector:23"};
	this.sidHashMap["Selector:23"] = {rtwname: "<S1>/Out1"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();
