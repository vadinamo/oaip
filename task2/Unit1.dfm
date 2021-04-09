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
  OnDblClick = OndDoubleClick
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
    Top = 175
    Width = 243
    Height = 483
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
  object Panel3: TPanel
    Left = 870
    Top = 202
    Width = 222
    Height = 93
    BevelWidth = 2
    Color = clSilver
    ParentBackground = False
    TabOrder = 2
    object Label3: TLabel
      Left = 8
      Top = 8
      Width = 176
      Height = 13
      Caption = #1048#1079#1084#1077#1085#1077#1085#1080#1077' '#1082#1086#1086#1088#1076#1080#1085#1072#1090' '#1094#1077#1085#1090#1088#1072' '#1084#1072#1089#1089
    end
    object Edit1: TEdit
      Left = 8
      Top = 27
      Width = 97
      Height = 21
      NumbersOnly = True
      TabOrder = 0
      TextHint = 'X'
    end
    object Edit2: TEdit
      Left = 120
      Top = 27
      Width = 97
      Height = 21
      NumbersOnly = True
      TabOrder = 1
      TextHint = 'Y'
    end
    object Button4: TButton
      Left = 64
      Top = 54
      Width = 89
      Height = 25
      Cursor = crHandPoint
      Caption = #1055#1088#1080#1084#1077#1085#1080#1090#1100
      TabOrder = 2
    end
  end
  object Panel4: TPanel
    Left = 870
    Top = 301
    Width = 222
    Height = 141
    BevelWidth = 2
    Color = clSilver
    ParentBackground = False
    TabOrder = 3
    object Label4: TLabel
      Left = 8
      Top = 8
      Width = 201
      Height = 13
      Caption = #1048#1079#1084#1077#1085#1077#1085#1080#1077' '#1088#1072#1079#1084#1077#1088#1072' ('#1063#1077#1090#1099#1088#1077#1093#1091#1075#1086#1083#1100#1085#1080#1082')'
    end
  end
  object Panel5: TPanel
    Left = 859
    Top = 664
    Width = 243
    Height = 122
    BevelWidth = 3
    Color = clSilver
    ParentBackground = False
    TabOrder = 4
    object Label7: TLabel
      Left = 8
      Top = 9
      Width = 104
      Height = 13
      Caption = #1044#1086#1073#1072#1074#1083#1077#1085#1080#1077' '#1092#1080#1075#1091#1088#1099
    end
    object Button6: TButton
      Left = 8
      Top = 24
      Width = 225
      Height = 42
      Cursor = crHandPoint
      Caption = #1063#1077#1090#1099#1088#1077#1093#1091#1075#1086#1083#1100#1085#1080#1082
      TabOrder = 0
    end
    object Button7: TButton
      Left = 8
      Top = 72
      Width = 225
      Height = 41
      Cursor = crHandPoint
      Caption = #1050#1088#1091#1075
      TabOrder = 1
    end
  end
  object Panel6: TPanel
    Left = 870
    Top = 576
    Width = 222
    Height = 73
    BevelWidth = 2
    Color = clSilver
    ParentBackground = False
    TabOrder = 5
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
      Height = 39
      Cursor = crHandPoint
      Caption = #1057#1090#1077#1088#1077#1090#1100
      TabOrder = 0
      OnClick = Button5Click
    end
  end
  object Panel7: TPanel
    Left = 870
    Top = 448
    Width = 222
    Height = 122
    BevelWidth = 2
    Color = clSilver
    ParentBackground = False
    TabOrder = 6
    object Label9: TLabel
      Left = 8
      Top = 6
      Width = 152
      Height = 13
      Caption = #1048#1079#1084#1077#1085#1077#1085#1080#1077' '#1088#1072#1076#1080#1091#1089#1086#1074' ('#1069#1083#1083#1080#1087#1089')'
    end
    object Label10: TLabel
      Left = 8
      Top = 27
      Width = 12
      Height = 13
      Caption = '10'
    end
    object Label11: TLabel
      Left = 190
      Top = 27
      Width = 24
      Height = 13
      Caption = '1000'
    end
    object Label12: TLabel
      Left = 8
      Top = 79
      Width = 12
      Height = 13
      Caption = '10'
    end
    object Label13: TLabel
      Left = 191
      Top = 80
      Width = 24
      Height = 13
      Caption = '1000'
    end
    object Label14: TLabel
      Left = 80
      Top = 27
      Width = 60
      Height = 13
      Caption = #1056#1072#1076#1080#1091#1089' '#1087#1086' X'
    end
    object Label15: TLabel
      Left = 80
      Top = 78
      Width = 60
      Height = 13
      Caption = #1056#1072#1076#1080#1091#1089' '#1087#1086' Y'
    end
    object ScrollBar2: TScrollBar
      Left = 8
      Top = 46
      Width = 201
      Height = 17
      Cursor = crHSplit
      Max = 1000
      Min = 10
      PageSize = 0
      Position = 10
      TabOrder = 0
    end
    object ScrollBar3: TScrollBar
      Left = 8
      Top = 97
      Width = 201
      Height = 16
      Cursor = crHSplit
      Max = 1000
      Min = 10
      PageSize = 0
      Position = 10
      TabOrder = 1
    end
  end
  object Panel8: TPanel
    Left = 878
    Top = 392
    Width = 209
    Height = 45
    Color = clSilver
    ParentBackground = False
    TabOrder = 7
    object Label6: TLabel
      Left = 96
      Top = 5
      Width = 17
      Height = 13
      Caption = 'oY'
    end
    object ScrollBar4: TScrollBar
      Left = 8
      Top = 24
      Width = 193
      Height = 17
      DragCursor = crHSplit
      Max = 1000
      Min = -1000
      PageSize = 0
      TabOrder = 0
      OnChange = ScrollBar4Change
    end
  end
  object Panel9: TPanel
    Left = 878
    Top = 328
    Width = 209
    Height = 49
    Color = clSilver
    ParentBackground = False
    TabOrder = 8
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
      HelpType = htKeyword
      DragCursor = crHSplit
      Max = 1000
      Min = -1000
      PageSize = 0
      TabOrder = 0
      OnChange = ScrollBar1Change
    end
  end
  object Timer1: TTimer
    Interval = 50
    OnTimer = Timer1Timer
    Left = 768
    Top = 688
  end
end
