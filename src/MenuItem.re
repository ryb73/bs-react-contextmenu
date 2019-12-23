[@bs.module "react-contextmenu"] [@react.component]
external make:
    (
        ~disabled: bool=?,
        ~divider: bool=?,
        ~onClick: (ReactEvent.Mouse.t => unit)=?,
        ~preventClose: bool=?,
        ~children: React.element=?,
    ) => React.element = "MenuItem";
