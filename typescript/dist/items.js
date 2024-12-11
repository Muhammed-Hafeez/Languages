"use strict";
Object.defineProperty(exports, "__esModule", { value: true });
exports.Items = void 0;
var Items = /** @class */ (function () {
    function Items() {
        Items.id = 0;
        this.list = [];
    }
    Items.prototype.setItem = function (name, price) {
        return this.list.push({ id: Items.id++, name: name, price: price });
    };
    Items.prototype.getItems = function () {
        console.log("Menu:");
        if (this.list.length < 1)
            console.log("no items found the list is empty");
        for (var i = 0; i < this.list.length; i++) {
            var element = this.list[i];
            console.log(element);
        }
    };
    Items.prototype.getItemDetails = function (identifier) {
        var item;
        if (typeof identifier === "number") {
            item = this.list.filter(function (elem) { return elem.id === identifier; })[0];
        }
        else {
            item = this.list.filter(function (elem) { return elem.name === identifier; })[0];
        }
        if (!item)
            return null;
        return item;
    };
    return Items;
}());
exports.Items = Items;
