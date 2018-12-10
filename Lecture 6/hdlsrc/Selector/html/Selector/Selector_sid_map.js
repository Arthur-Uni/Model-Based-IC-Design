function RTW_SidParentMap() {
    this.sidParentMap = new Array();
    this.sidParentMap["Selector:18"] = "Selector:17";
    this.sidParentMap["Selector:19"] = "Selector:17";
    this.sidParentMap["Selector:20"] = "Selector:17";
    this.sidParentMap["Selector:21"] = "Selector:17";
    this.sidParentMap["Selector:22"] = "Selector:17";
    this.sidParentMap["Selector:2"] = "Selector:17";
    this.sidParentMap["Selector:14"] = "Selector:17";
    this.sidParentMap["Selector:28"] = "Selector:17";
    this.sidParentMap["Selector:1"] = "Selector:17";
    this.sidParentMap["Selector:23"] = "Selector:17";
    this.getParentSid = function(sid) { return this.sidParentMap[sid];}
}
    RTW_SidParentMap.instance = new RTW_SidParentMap();
