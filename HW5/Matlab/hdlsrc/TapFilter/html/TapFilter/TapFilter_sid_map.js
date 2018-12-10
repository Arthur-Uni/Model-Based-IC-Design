function RTW_SidParentMap() {
    this.sidParentMap = new Array();
    this.sidParentMap["TapFilter:13"] = "TapFilter:12";
    this.sidParentMap["TapFilter:44"] = "TapFilter:12";
    this.sidParentMap["TapFilter:15"] = "TapFilter:12";
    this.sidParentMap["TapFilter:16"] = "TapFilter:12";
    this.sidParentMap["TapFilter:17"] = "TapFilter:12";
    this.sidParentMap["TapFilter:18"] = "TapFilter:12";
    this.getParentSid = function(sid) { return this.sidParentMap[sid];}
}
    RTW_SidParentMap.instance = new RTW_SidParentMap();
