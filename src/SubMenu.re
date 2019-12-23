[@bs.module "react-contextmenu"] [@react.component]
external make:
    (
        ~className: string=?,
        ~disabled: bool=?,
        ~onClick: (ReactEvent.Mouse.t => unit)=?,
        ~preventCloseOnClick: bool=?,
        ~title: string,
        ~children: React.element,
    ) => React.element = "SubMenu";
