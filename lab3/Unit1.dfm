object Form1: TForm1
  Left = 0
  Top = 0
  BorderIcons = [biSystemMenu]
  BorderStyle = bsSingle
  Caption = #1056#1072#1089#1087#1080#1089#1072#1085#1080#1077' '#1072#1074#1090#1086#1073#1091#1089#1086#1074
  ClientHeight = 600
  ClientWidth = 946
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object ComboBox1: TComboBox
    Left = 8
    Top = 8
    Width = 425
    Height = 29
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -17
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 0
    TextHint = #1053#1086#1084#1077#1088' '#1072#1074#1090#1086#1073#1091#1089#1072
  end
  object Panel1: TPanel
    Left = 8
    Top = 43
    Width = 425
    Height = 153
    BevelWidth = 3
    Color = clSilver
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -17
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentBackground = False
    ParentFont = False
    TabOrder = 1
    object Label1: TLabel
      Left = 8
      Top = 86
      Width = 160
      Height = 21
      Caption = #1042#1088#1077#1084#1103' '#1086#1090#1087#1088#1072#1074#1083#1077#1085#1080#1103':'
    end
    object Label2: TLabel
      Left = 252
      Top = 85
      Width = 136
      Height = 21
      Caption = #1042#1088#1077#1084#1103' '#1087#1088#1080#1073#1099#1090#1080#1103':'
    end
    object Label3: TLabel
      Left = 87
      Top = 113
      Width = 7
      Height = 23
      Caption = ':'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -19
      Font.Name = 'Tahoma'
      Font.Style = []
      ParentFont = False
    end
    object Label4: TLabel
      Left = 331
      Top = 112
      Width = 7
      Height = 23
      Caption = ':'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -19
      Font.Name = 'Tahoma'
      Font.Style = []
      ParentFont = False
    end
    object Edit1: TEdit
      Left = 8
      Top = 8
      Width = 409
      Height = 29
      TabOrder = 0
      TextHint = #1058#1080#1087' '#1072#1074#1090#1086#1073#1091#1089#1072
    end
    object Edit2: TEdit
      Left = 8
      Top = 43
      Width = 409
      Height = 29
      TabOrder = 1
      TextHint = #1055#1091#1085#1082#1090' '#1085#1072#1079#1085#1072#1095#1077#1085#1080#1103
    end
    object Edit3: TEdit
      Left = 8
      Top = 113
      Width = 73
      Height = 29
      NumbersOnly = True
      TabOrder = 2
    end
    object Edit4: TEdit
      Left = 100
      Top = 113
      Width = 69
      Height = 29
      NumbersOnly = True
      TabOrder = 3
    end
    object Edit5: TEdit
      Left = 252
      Top = 112
      Width = 73
      Height = 29
      NumbersOnly = True
      TabOrder = 4
    end
    object Edit6: TEdit
      Left = 344
      Top = 112
      Width = 73
      Height = 29
      NumbersOnly = True
      TabOrder = 5
    end
  end
  object Panel2: TPanel
    Left = 8
    Top = 202
    Width = 425
    Height = 50
    BevelWidth = 3
    Color = clSilver
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -17
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentBackground = False
    ParentFont = False
    TabOrder = 2
    object Button1: TButton
      Left = 8
      Top = 8
      Width = 97
      Height = 33
      Caption = #1044#1086#1073#1072#1074#1080#1090#1100
      TabOrder = 0
      OnClick = Button1Click
    end
    object Button2: TButton
      Left = 111
      Top = 8
      Width = 97
      Height = 33
      Caption = #1059#1076#1072#1083#1080#1090#1100
      TabOrder = 1
      OnClick = Button2Click
    end
    object Button3: TButton
      Left = 214
      Top = 8
      Width = 203
      Height = 33
      Caption = #1042#1099#1074#1086#1076' '#1074#1089#1077#1093' '#1072#1074#1090#1086#1073#1091#1089#1086#1074
      TabOrder = 2
      OnClick = Button3Click
    end
  end
  object Memo1: TMemo
    Left = 439
    Top = 6
    Width = 499
    Height = 586
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -20
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    ReadOnly = True
    ScrollBars = ssVertical
    TabOrder = 3
  end
  object Panel3: TPanel
    Left = 8
    Top = 258
    Width = 425
    Height = 201
    BevelWidth = 3
    Color = clSilver
    ParentBackground = False
    TabOrder = 4
    object Label5: TLabel
      Left = 8
      Top = 8
      Width = 202
      Height = 21
      Caption = #1055#1086#1080#1089#1082' '#1087#1086#1076#1093#1086#1076#1103#1097#1077#1075#1086' '#1088#1077#1081#1089#1072
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -17
      Font.Name = 'Tahoma'
      Font.Style = []
      ParentFont = False
    end
    object Label6: TLabel
      Left = 191
      Top = 110
      Width = 7
      Height = 23
      Caption = ':'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -19
      Font.Name = 'Tahoma'
      Font.Style = []
      ParentFont = False
    end
    object Label7: TLabel
      Left = 72
      Top = 83
      Width = 289
      Height = 21
      Caption = #1042#1088#1077#1084#1103' '#1087#1088#1080#1073#1099#1090#1080#1103' ('#1077#1089#1083#1080' '#1085#1077#1086#1073#1093#1086#1076#1080#1084#1086'):'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -17
      Font.Name = 'Tahoma'
      Font.Style = []
      ParentFont = False
    end
    object Edit7: TEdit
      Left = 8
      Top = 35
      Width = 409
      Height = 29
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -17
      Font.Name = 'Tahoma'
      Font.Style = []
      ParentFont = False
      TabOrder = 0
      TextHint = #1055#1091#1085#1082#1090' '#1085#1072#1079#1085#1072#1095#1077#1085#1080#1103
    end
    object Edit8: TEdit
      Left = 112
      Top = 110
      Width = 73
      Height = 29
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -17
      Font.Name = 'Tahoma'
      Font.Style = []
      NumbersOnly = True
      ParentFont = False
      TabOrder = 1
    end
    object Edit9: TEdit
      Left = 204
      Top = 110
      Width = 69
      Height = 29
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -17
      Font.Name = 'Tahoma'
      Font.Style = []
      NumbersOnly = True
      ParentFont = False
      TabOrder = 2
    end
    object Button4: TButton
      Left = 111
      Top = 152
      Width = 162
      Height = 33
      Caption = #1048#1089#1082#1072#1090#1100
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -17
      Font.Name = 'Tahoma'
      Font.Style = []
      ParentFont = False
      TabOrder = 3
      OnClick = Button4Click
    end
  end
  object Panel4: TPanel
    Left = 8
    Top = 465
    Width = 208
    Height = 82
    BevelWidth = 3
    BorderWidth = 3
    Color = clSilver
    ParentBackground = False
    TabOrder = 5
    object Label8: TLabel
      Left = 8
      Top = 8
      Width = 86
      Height = 21
      Caption = #1040#1074#1090#1086#1073#1091#1089' '#8470
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -17
      Font.Name = 'Tahoma'
      Font.Style = []
      ParentFont = False
    end
    object Edit10: TEdit
      Left = 100
      Top = 8
      Width = 98
      Height = 29
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -17
      Font.Name = 'Tahoma'
      Font.Style = []
      NumbersOnly = True
      ParentFont = False
      TabOrder = 0
    end
    object Button5: TButton
      Left = 41
      Top = 43
      Width = 128
      Height = 33
      Caption = #1042#1098#1077#1093#1072#1083
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -17
      Font.Name = 'Tahoma'
      Font.Style = []
      ParentFont = False
      TabOrder = 1
      OnClick = Button5Click
    end
  end
  object Panel5: TPanel
    Left = 222
    Top = 465
    Width = 211
    Height = 82
    BevelWidth = 3
    BorderWidth = 3
    Color = clSilver
    ParentBackground = False
    TabOrder = 6
    object Label9: TLabel
      Left = 16
      Top = 8
      Width = 86
      Height = 21
      Caption = #1040#1074#1090#1086#1073#1091#1089' '#8470
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -17
      Font.Name = 'Tahoma'
      Font.Style = []
      ParentFont = False
    end
    object Edit11: TEdit
      Left = 108
      Top = 8
      Width = 93
      Height = 29
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -17
      Font.Name = 'Tahoma'
      Font.Style = []
      NumbersOnly = True
      ParentFont = False
      TabOrder = 0
    end
    object Button6: TButton
      Left = 40
      Top = 43
      Width = 129
      Height = 33
      Caption = #1042#1099#1077#1093#1072#1083
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -17
      Font.Name = 'Tahoma'
      Font.Style = []
      ParentFont = False
      TabOrder = 1
      OnClick = Button6Click
    end
  end
  object Button8: TButton
    Left = 8
    Top = 558
    Width = 81
    Height = 34
    Caption = #1042#1099#1093#1086#1076
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -17
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 7
    OnClick = Button8Click
  end
end
