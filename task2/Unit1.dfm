object Form1: TForm1
  Left = 0
  Top = 0
  Cursor = crCross
  Caption = '1000'
  ClientHeight = 794
  ClientWidth = 1110
  Color = clWhite
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  OnMouseDown = FormMouseDown
  OnMouseUp = FormMouseUp
  PixelsPerInch = 96
  TextHeight = 13
  object Panel1: TPanel
    Left = 859
    Top = 8
    Width = 243
    Height = 121
    BevelWidth = 3
    Color = clSilver
    ParentBackground = False
    TabOrder = 0
    object Label1: TLabel
      Left = 8
      Top = 8
      Width = 112
      Height = 13
      Caption = #1048#1085#1092#1086#1088#1084#1072#1094#1080#1103' '#1086' '#1092#1080#1075#1091#1088#1077
    end
    object Button1: TButton
      Left = 8
      Top = 40
      Width = 225
      Height = 33
      Cursor = crHandPoint
      Caption = #1055#1083#1086#1097#1072#1076#1100' '#1092#1080#1075#1091#1088#1099
      TabOrder = 0
      OnClick = Button1Click
    end
    object Button2: TButton
      Left = 8
      Top = 79
      Width = 225
      Height = 34
      Cursor = crHandPoint
      Caption = #1055#1077#1088#1080#1084#1077#1090#1088' '#1092#1080#1075#1091#1088#1099
      TabOrder = 1
      OnClick = Button2Click
    end
  end
  object Panel2: TPanel
    Left = 859
    Top = 135
    Width = 243
    Height = 370
    BevelWidth = 3
    Color = clSilver
    ParentBackground = False
    TabOrder = 1
    object Label2: TLabel
      Left = 8
      Top = 8
      Width = 68
      Height = 13
      Caption = #1048#1085#1089#1090#1088#1091#1084#1077#1085#1090#1099
    end
  end
  object Panel4: TPanel
    Left = 867
    Top = 322
    Width = 222
    Height = 111
    BevelWidth = 2
    Color = clSilver
    ParentBackground = False
    TabOrder = 2
    object Label4: TLabel
      Left = 8
      Top = 8
      Width = 52
      Height = 13
      Caption = #1044#1074#1080#1078#1077#1085#1080#1077
    end
  end
  object Panel5: TPanel
    Left = 859
    Top = 511
    Width = 243
    Height = 122
    BevelWidth = 3
    Color = clSilver
    ParentBackground = False
    TabOrder = 3
    object Label7: TLabel
      Left = 8
      Top = 10
      Width = 104
      Height = 13
      Caption = #1044#1086#1073#1072#1074#1083#1077#1085#1080#1077' '#1092#1080#1075#1091#1088#1099
    end
    object Button7: TButton
      Left = 8
      Top = 60
      Width = 225
      Height = 25
      Cursor = crHandPoint
      Caption = #1050#1088#1091#1075
      TabOrder = 0
      OnClick = Button7Click
    end
    object Button3: TButton
      Left = 8
      Top = 91
      Width = 225
      Height = 25
      Cursor = crHandPoint
      Caption = #1069#1083#1083#1080#1087#1089
      TabOrder = 1
      OnClick = Button3Click
    end
    object Button4: TButton
      Left = 8
      Top = 29
      Width = 225
      Height = 25
      Caption = #1063#1077#1090#1099#1088#1077#1093#1091#1075#1086#1083#1100#1085#1080#1082
      TabOrder = 2
      OnClick = Button4Click
    end
  end
  object Panel6: TPanel
    Left = 867
    Top = 439
    Width = 222
    Height = 57
    BevelWidth = 2
    Color = clSilver
    ParentBackground = False
    TabOrder = 4
    object Label8: TLabel
      Left = 8
      Top = 8
      Width = 83
      Height = 13
      Caption = #1057#1090#1077#1088#1077#1090#1100' '#1092#1080#1075#1091#1088#1091
    end
    object Button5: TButton
      Left = 8
      Top = 27
      Width = 209
      Height = 26
      Cursor = crHandPoint
      Caption = #1057#1090#1077#1088#1077#1090#1100
      TabOrder = 0
      OnClick = Button5Click
    end
  end
  object Panel7: TPanel
    Left = 867
    Top = 162
    Width = 222
    Height = 154
    BevelWidth = 2
    Color = clSilver
    ParentBackground = False
    TabOrder = 5
    object Label9: TLabel
      Left = 8
      Top = 6
      Width = 140
      Height = 13
      Caption = #1048#1079#1084#1077#1085#1077#1085#1080#1077' '#1088#1072#1079#1084#1077#1088#1072' '#1092#1080#1075#1091#1088#1099
    end
  end
  object Panel8: TPanel
    Left = 875
    Top = 380
    Width = 209
    Height = 45
    BevelWidth = 2
    Color = clSilver
    ParentBackground = False
    TabOrder = 6
    object Label6: TLabel
      Left = 96
      Top = 0
      Width = 12
      Height = 13
      Caption = 'oY'
    end
    object ScrollBar4: TScrollBar
      Left = 8
      Top = 19
      Width = 193
      Height = 17
      Max = 1000
      Min = -1000
      PageSize = 0
      TabOrder = 0
      OnChange = ScrollBar4Change
    end
  end
  object Panel9: TPanel
    Left = 875
    Top = 325
    Width = 209
    Height = 49
    BevelWidth = 2
    Color = clSilver
    ParentBackground = False
    TabOrder = 7
    object Label5: TLabel
      Left = 96
      Top = 5
      Width = 12
      Height = 13
      Caption = 'oX'
    end
    object ScrollBar1: TScrollBar
      Left = 8
      Top = 24
      Width = 193
      Height = 17
      Max = 1000
      Min = -1000
      PageSize = 0
      TabOrder = 0
      OnChange = ScrollBar1Change
    end
  end
  object Panel3: TPanel
    Left = 875
    Top = 247
    Width = 209
    Height = 54
    BevelWidth = 2
    Color = clSilver
    ParentBackground = False
    TabOrder = 8
    object Label15: TLabel
      Left = 80
      Top = 6
      Width = 42
      Height = 13
      Caption = #1055#1086' '#1086#1089#1080' Y'
    end
    object ScrollBar3: TScrollBar
      Left = 8
      Top = 25
      Width = 193
      Height = 16
      Cursor = crHSplit
      Max = 1000
      Min = -1000
      PageSize = 0
      Position = 10
      TabOrder = 0
      OnChange = ScrollBar3Change
    end
  end
  object Panel10: TPanel
    Left = 875
    Top = 187
    Width = 209
    Height = 54
    Caption = 'Panel10'
    Color = clSilver
    ParentBackground = False
    TabOrder = 9
    object Label14: TLabel
      Left = 80
      Top = 2
      Width = 42
      Height = 13
      Caption = #1055#1086' '#1086#1089#1080' X'
    end
    object ScrollBar2: TScrollBar
      Left = 8
      Top = 21
      Width = 193
      Height = 17
      Cursor = crHSplit
      Max = 1000
      Min = -1000
      PageSize = 0
      Position = 10
      TabOrder = 0
      OnChange = ScrollBar2Change
    end
  end
  object Timer1: TTimer
    Interval = 50
    OnTimer = Timer1Timer
    Left = 768
    Top = 688
  end
end
