module type t = {
  type buttonStateT =
    | LeftButton
    | MiddleButton
    | RightButton;
  type stateT =
    | MouseDown
    | MouseUp;
  type keycodeT =
    | Backspace
    | Tab
    | Enter
    | Escape
    | Space
    | Quote
    | Comma
    | Minus
    | Period
    | Slash
    | Num_0
    | Num_1
    | Num_2
    | Num_3
    | Num_4
    | Num_5
    | Num_6
    | Num_7
    | Num_8
    | Num_9
    | Semicolon
    | Equals
    | OpenBracket
    | Backslash
    | CloseBracket
    | A
    | B
    | C
    | D
    | E
    | F
    | G
    | H
    | I
    | J
    | K
    | L
    | M
    | N
    | O
    | P
    | Q
    | R
    | S
    | T
    | U
    | V
    | W
    | X
    | Y
    | Z
    | Right
    | Left
    | Down
    | Up
    | LeftCtrl
    | LeftShift
    | LeftAlt
    | LeftOsKey
    | RightCtrl
    | RightShift
    | RightAlt
    | RightOsKey
    | CapsLock
    | Backtick
    | Nothing;
  let keycodeMap: Int32.t => keycodeT;

  type touchT = {hash: float, x: float, y: float};
};
