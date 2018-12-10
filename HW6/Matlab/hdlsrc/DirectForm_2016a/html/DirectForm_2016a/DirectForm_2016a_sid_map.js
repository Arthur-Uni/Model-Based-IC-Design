function RTW_SidParentMap() {
    this.sidParentMap = new Array();
    this.sidParentMap["DirectForm_2016a:26"] = "DirectForm_2016a:25";
    this.sidParentMap["DirectForm_2016a:9"] = "DirectForm_2016a:25";
    this.sidParentMap["DirectForm_2016a:10"] = "DirectForm_2016a:25";
    this.sidParentMap["DirectForm_2016a:11"] = "DirectForm_2016a:25";
    this.sidParentMap["DirectForm_2016a:8"] = "DirectForm_2016a:25";
    this.sidParentMap["DirectForm_2016a:14"] = "DirectForm_2016a:25";
    this.sidParentMap["DirectForm_2016a:16"] = "DirectForm_2016a:25";
    this.sidParentMap["DirectForm_2016a:18"] = "DirectForm_2016a:25";
    this.sidParentMap["DirectForm_2016a:3"] = "DirectForm_2016a:25";
    this.sidParentMap["DirectForm_2016a:4"] = "DirectForm_2016a:25";
    this.sidParentMap["DirectForm_2016a:5"] = "DirectForm_2016a:25";
    this.sidParentMap["DirectForm_2016a:7"] = "DirectForm_2016a:25";
    this.sidParentMap["DirectForm_2016a:15"] = "DirectForm_2016a:25";
    this.sidParentMap["DirectForm_2016a:17"] = "DirectForm_2016a:25";
    this.sidParentMap["DirectForm_2016a:19"] = "DirectForm_2016a:25";
    this.sidParentMap["DirectForm_2016a:27"] = "DirectForm_2016a:25";
    this.getParentSid = function(sid) { return this.sidParentMap[sid];}
}
    RTW_SidParentMap.instance = new RTW_SidParentMap();
