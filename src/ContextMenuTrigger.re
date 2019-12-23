
[@bs.module "react-contextmenu"] [@react.component]
external make:
    (
        ~disable: bool=?,
        ~disableIfShiftIsPressed: bool=?,
        ~holdToDisplay: int=?,
        ~id: string,
        ~children: 'a,
    ) => React.element = "ContextMenuTrigger";
