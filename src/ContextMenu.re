[@bs.module "react-contextmenu"] [@react.component]
external make:
    (
        ~className: string=?,
        ~id: string,
        ~children: 'a
    ) => React.element = "ContextMenu";
