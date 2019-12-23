open Storybook.React;
open React;
open ReactContextMenu;

let className = Css.(style([
    backgroundColor(hex("aaa")),
    height(px(64)),
    lineHeight(px(64)),
    textAlign(center),
    userSelect(none),
    width(px(64)),
]));

Css.(global("." ++ ClassNames.contextMenu, [
    display(none),
]));

Css.(global("." ++ ClassNames.contextMenuVisible, [
    backgroundColor(white),
    border(px(1), solid, blue),
    display(initial),
    userSelect(none),
]));

ClassNames.(Css.(global({j|.$(item):not(.$(subMenu)):not(.$(divider))|j}, [
    padding2(~v=px(4), ~h=(px(12))),
])));

ClassNames.(Css.(global({j|.$(itemSelected):not(.$(itemDisabled))|j}, [
    backgroundColor(blue),
])));

Css.(global("." ++ ClassNames.itemDisabled, [
    color(hex("777")),
]));

Css.(global("." ++ ClassNames.divider, [
    backgroundColor(hex("777")),
    height(px(1)),
    margin2(~v=px(4), ~h=zero),
    padding(zero),
]));

storiesOf("Example", Node.Module.module_)
|> add("Example", () =>
    <>
        <ContextMenuTrigger id="menu">
            <div className>
                (string("hi"))
            </div>
        </ContextMenuTrigger>
        <ContextMenu id="menu">
            <MenuItem onClick={_ => Js.log("yo")}>(string("yo"))</MenuItem>
            <MenuItem onClick={_ => Js.log("ok?")}>(string("ok?"))</MenuItem>
            <MenuItem disabled={true} onClick={_ => Js.log("disabled!")}>
                (string("disabled"))
            </MenuItem>
            <MenuItem preventClose={true} onClick={_ => Js.log("preventClose!")}>
                (string("preventClose"))
            </MenuItem>
            <MenuItem divider={true} />
            <SubMenu title="lol">
                <MenuItem onClick={_ => Js.log("what")}>(string("what"))</MenuItem>
                <MenuItem onClick={_ => Js.log("hah")}>(string("hah"))</MenuItem>
            </SubMenu>
        </ContextMenu>
    </>
);
