function RTW_SidParentMap() {
    this.sidParentMap = new Array();
    this.sidParentMap["SelectorAdder:18"] = "SelectorAdder:17";
    this.sidParentMap["SelectorAdder:19"] = "SelectorAdder:17";
    this.sidParentMap["SelectorAdder:20"] = "SelectorAdder:17";
    this.sidParentMap["SelectorAdder:21"] = "SelectorAdder:17";
    this.sidParentMap["SelectorAdder:22"] = "SelectorAdder:17";
    this.sidParentMap["SelectorAdder:2"] = "SelectorAdder:17";
    this.sidParentMap["SelectorAdder:14"] = "SelectorAdder:17";
    this.sidParentMap["SelectorAdder:28"] = "SelectorAdder:17";
    this.sidParentMap["SelectorAdder:1"] = "SelectorAdder:17";
    this.sidParentMap["SelectorAdder:23"] = "SelectorAdder:17";
    this.getParentSid = function(sid) { return this.sidParentMap[sid];}
}
    RTW_SidParentMap.instance = new RTW_SidParentMap();
