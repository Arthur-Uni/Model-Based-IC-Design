function RTW_Sid2UrlHash() {
	this.urlHashMap = new Array();
	/* <S1>/Add */
	this.urlHashMap["SelectorAdder:2"] = "Subsystem.vhd:66";
	/* <S1>/Constant4 */
	this.urlHashMap["SelectorAdder:14"] = "Subsystem.vhd:61";
	/* <S1>/Data Type Conversion */
	this.urlHashMap["SelectorAdder:28"] = "Subsystem.vhd:63";
	/* <S1>/Multiport
Switch */
	this.urlHashMap["SelectorAdder:1"] = "Subsystem.vhd:86";
	this.getUrlHash = function(sid) { return this.urlHashMap[sid];}
}
RTW_Sid2UrlHash.instance = new RTW_Sid2UrlHash();
function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "SelectorAdder"};
	this.sidHashMap["SelectorAdder"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<S1>/In1"] = {sid: "SelectorAdder:18"};
	this.sidHashMap["SelectorAdder:18"] = {rtwname: "<S1>/In1"};
	this.rtwnameHashMap["<S1>/In2"] = {sid: "SelectorAdder:19"};
	this.sidHashMap["SelectorAdder:19"] = {rtwname: "<S1>/In2"};
	this.rtwnameHashMap["<S1>/In3"] = {sid: "SelectorAdder:20"};
	this.sidHashMap["SelectorAdder:20"] = {rtwname: "<S1>/In3"};
	this.rtwnameHashMap["<S1>/In4"] = {sid: "SelectorAdder:21"};
	this.sidHashMap["SelectorAdder:21"] = {rtwname: "<S1>/In4"};
	this.rtwnameHashMap["<S1>/In5"] = {sid: "SelectorAdder:22"};
	this.sidHashMap["SelectorAdder:22"] = {rtwname: "<S1>/In5"};
	this.rtwnameHashMap["<S1>/Add"] = {sid: "SelectorAdder:2"};
	this.sidHashMap["SelectorAdder:2"] = {rtwname: "<S1>/Add"};
	this.rtwnameHashMap["<S1>/Constant4"] = {sid: "SelectorAdder:14"};
	this.sidHashMap["SelectorAdder:14"] = {rtwname: "<S1>/Constant4"};
	this.rtwnameHashMap["<S1>/Data Type Conversion"] = {sid: "SelectorAdder:28"};
	this.sidHashMap["SelectorAdder:28"] = {rtwname: "<S1>/Data Type Conversion"};
	this.rtwnameHashMap["<S1>/Multiport Switch"] = {sid: "SelectorAdder:1"};
	this.sidHashMap["SelectorAdder:1"] = {rtwname: "<S1>/Multiport Switch"};
	this.rtwnameHashMap["<S1>/Out1"] = {sid: "SelectorAdder:23"};
	this.sidHashMap["SelectorAdder:23"] = {rtwname: "<S1>/Out1"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();
