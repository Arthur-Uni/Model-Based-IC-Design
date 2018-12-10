function RTW_SidParentMap() {
    this.sidParentMap = new Array();
    this.sidParentMap["TapFilter:9"] = "TapFilter:8";
    this.sidParentMap["TapFilter:6"] = "TapFilter:8";
    this.sidParentMap["TapFilter:3"] = "TapFilter:8";
    this.sidParentMap["TapFilter:4"] = "TapFilter:8";
    this.sidParentMap["TapFilter:5"] = "TapFilter:8";
    this.sidParentMap["TapFilter:10"] = "TapFilter:8";
    this.getParentSid = function(sid) { return this.sidParentMap[sid];}
}
    RTW_SidParentMap.instance = new RTW_SidParentMap();
