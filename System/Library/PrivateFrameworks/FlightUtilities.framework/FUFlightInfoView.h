/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:43:39 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/FlightUtilities.framework/FlightUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@protocol FUFlightInfoViewProtocol;
@class FUFlight, FULabel, UIButton;

@interface FUFlightInfoView : UIView {

	FUFlight* _flight;
	id<FUFlightInfoViewProtocol> _delegate;
	long long _currentFocus;
	FULabel* _labelAirlineName;
	FULabel* _labelFlightCode;
	FULabel* _labelStatusTitle;
	FULabel* _labelStatus;
	FULabel* _labelDepartureCity;
	FULabel* _labelDepartureCode;
	FULabel* _labelDepartureInfo1;
	FULabel* _labelDepartureInfo2;
	FULabel* _labelArrivalCity;
	FULabel* _labelArrivalCode;
	FULabel* _labelArrivalInfo1;
	FULabel* _labelArrivalInfo2;
	FULabel* _labelDepartureTitle;
	FULabel* _labelDepartureDate;
	FULabel* _labelDepartureDelay;
	FULabel* _labelArrivalTitle;
	FULabel* _labelArrivalDate;
	FULabel* _labelArrivalDelay;
	UIButton* _flightButton;
	unsigned long long _flightTimeDisplay;

}

@property (nonatomic,retain) FUFlight * flight;                                 //@synthesize flight=_flight - In the implementation block
@property (__weak) id<FUFlightInfoViewProtocol> delegate;                       //@synthesize delegate=_delegate - In the implementation block
@property (assign) long long currentFocus;                                      //@synthesize currentFocus=_currentFocus - In the implementation block
@property (__weak) FULabel * labelAirlineName;                                  //@synthesize labelAirlineName=_labelAirlineName - In the implementation block
@property (__weak) FULabel * labelFlightCode;                                   //@synthesize labelFlightCode=_labelFlightCode - In the implementation block
@property (__weak) FULabel * labelStatusTitle;                                  //@synthesize labelStatusTitle=_labelStatusTitle - In the implementation block
@property (__weak) FULabel * labelStatus;                                       //@synthesize labelStatus=_labelStatus - In the implementation block
@property (__weak) FULabel * labelDepartureCity;                                //@synthesize labelDepartureCity=_labelDepartureCity - In the implementation block
@property (__weak) FULabel * labelDepartureCode;                                //@synthesize labelDepartureCode=_labelDepartureCode - In the implementation block
@property (__weak) FULabel * labelDepartureInfo1;                               //@synthesize labelDepartureInfo1=_labelDepartureInfo1 - In the implementation block
@property (__weak) FULabel * labelDepartureInfo2;                               //@synthesize labelDepartureInfo2=_labelDepartureInfo2 - In the implementation block
@property (__weak) FULabel * labelArrivalCity;                                  //@synthesize labelArrivalCity=_labelArrivalCity - In the implementation block
@property (__weak) FULabel * labelArrivalCode;                                  //@synthesize labelArrivalCode=_labelArrivalCode - In the implementation block
@property (__weak) FULabel * labelArrivalInfo1;                                 //@synthesize labelArrivalInfo1=_labelArrivalInfo1 - In the implementation block
@property (__weak) FULabel * labelArrivalInfo2;                                 //@synthesize labelArrivalInfo2=_labelArrivalInfo2 - In the implementation block
@property (__weak) FULabel * labelDepartureTitle;                               //@synthesize labelDepartureTitle=_labelDepartureTitle - In the implementation block
@property (__weak) FULabel * labelDepartureDate;                                //@synthesize labelDepartureDate=_labelDepartureDate - In the implementation block
@property (__weak) FULabel * labelDepartureDelay;                               //@synthesize labelDepartureDelay=_labelDepartureDelay - In the implementation block
@property (__weak) FULabel * labelArrivalTitle;                                 //@synthesize labelArrivalTitle=_labelArrivalTitle - In the implementation block
@property (__weak) FULabel * labelArrivalDate;                                  //@synthesize labelArrivalDate=_labelArrivalDate - In the implementation block
@property (__weak) FULabel * labelArrivalDelay;                                 //@synthesize labelArrivalDelay=_labelArrivalDelay - In the implementation block
@property (__weak) UIButton * flightButton;                                     //@synthesize flightButton=_flightButton - In the implementation block
@property (assign,nonatomic) unsigned long long flightTimeDisplay;              //@synthesize flightTimeDisplay=_flightTimeDisplay - In the implementation block
+(id)flightView;
-(void)setDelegate:(id<FUFlightInfoViewProtocol>)arg1 ;
-(void)dealloc;
-(id<FUFlightInfoViewProtocol>)delegate;
-(void)awakeFromNib;
-(void)setCurrentFocus:(long long)arg1 ;
-(long long)currentFocus;
-(FUFlight *)flight;
-(void)setupLabelStyles;
-(FULabel *)labelAirlineName;
-(FULabel *)labelFlightCode;
-(FULabel *)labelStatusTitle;
-(FULabel *)labelStatus;
-(FULabel *)labelDepartureCity;
-(FULabel *)labelDepartureCode;
-(FULabel *)labelDepartureInfo1;
-(FULabel *)labelDepartureInfo2;
-(FULabel *)labelArrivalCity;
-(FULabel *)labelArrivalCode;
-(FULabel *)labelArrivalInfo1;
-(FULabel *)labelArrivalInfo2;
-(FULabel *)labelDepartureTitle;
-(FULabel *)labelDepartureDate;
-(FULabel *)labelDepartureDelay;
-(FULabel *)labelArrivalTitle;
-(FULabel *)labelArrivalDate;
-(FULabel *)labelArrivalDelay;
-(UIButton *)flightButton;
-(void)updateFlightDates;
-(void)setFlightTimeDisplay:(unsigned long long)arg1 ;
-(void)updateAirlineInformation;
-(void)updateLocationInfo;
-(void)updateFlightTerminalInfo;
-(void)updateFlightStatus;
-(void)updateDelayInfo;
-(BOOL)knownStatus;
-(unsigned long long)flightTimeDisplay;
-(void)updateTimeLabel:(id)arg1 withString:(id)arg2 ;
-(id)displayStringForDate:(id)arg1 locale:(id)arg2 late:(BOOL)arg3 timeZone:(id)arg4 ;
-(void)setFlight:(FUFlight *)arg1 ;
-(void)toggleTimeDisplay:(id)arg1 ;
-(void)flightButtonTapped:(id)arg1 ;
-(void)setLabelAirlineName:(FULabel *)arg1 ;
-(void)setLabelFlightCode:(FULabel *)arg1 ;
-(void)setLabelStatusTitle:(FULabel *)arg1 ;
-(void)setLabelStatus:(FULabel *)arg1 ;
-(void)setLabelDepartureCity:(FULabel *)arg1 ;
-(void)setLabelDepartureCode:(FULabel *)arg1 ;
-(void)setLabelDepartureInfo1:(FULabel *)arg1 ;
-(void)setLabelDepartureInfo2:(FULabel *)arg1 ;
-(void)setLabelArrivalCity:(FULabel *)arg1 ;
-(void)setLabelArrivalCode:(FULabel *)arg1 ;
-(void)setLabelArrivalInfo1:(FULabel *)arg1 ;
-(void)setLabelArrivalInfo2:(FULabel *)arg1 ;
-(void)setLabelDepartureTitle:(FULabel *)arg1 ;
-(void)setLabelDepartureDate:(FULabel *)arg1 ;
-(void)setLabelDepartureDelay:(FULabel *)arg1 ;
-(void)setLabelArrivalTitle:(FULabel *)arg1 ;
-(void)setLabelArrivalDate:(FULabel *)arg1 ;
-(void)setLabelArrivalDelay:(FULabel *)arg1 ;
-(void)setFlightButton:(UIButton *)arg1 ;
@end

