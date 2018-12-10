function RTW_Sid2UrlHash() {
	this.urlHashMap = new Array();
	/* <S1>/Delay */
	this.urlHashMap["CodeGeneration:3"] = "Delay.vhd:64";
	this.getUrlHash = function(sid) { return this.urlHashMap[sid];}
}
RTW_Sid2UrlHash.instance = new RTW_Sid2UrlHash();
function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "CodeGeneration"};
	this.sidHashMap["CodeGeneration"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<S1>/In1"] = {sid: "CodeGeneration:6"};
	this.sidHashMap["CodeGeneration:6"] = {rtwname: "<S1>/In1"};
	this.rtwnameHashMap["<S1>/Delay"] = {sid: "CodeGeneration:3"};
	this.sidHashMap["CodeGeneration:3"] = {rtwname: "<S1>/Delay"};
	this.rtwnameHashMap["<S1>/Out1"] = {sid: "CodeGeneration:7"};
	this.sidHashMap["CodeGeneration:7"] = {rtwname: "<S1>/Out1"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();
