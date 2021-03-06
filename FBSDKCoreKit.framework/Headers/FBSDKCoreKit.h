// Copyright (c) 2014-present, Facebook, Inc. All rights reserved.
//
// You are hereby granted a non-exclusive, worldwide, royalty-free license to use,
// copy, modify, and distribute this software in source code or binary form for use
// in connection with the web services and APIs provided by Facebook.
//
// As with any software that integrates with the Facebook platform, your use of
// this software is subject to the Facebook Developer Principles and Policies
// [http://developers.facebook.com/policy/]. This copyright notice shall be
// included in all copies or substantial portions of the software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS
// FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR
// COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER
// IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
// CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

#import <UIKit/UIKit.h>

#import <SatyaObjCLib/FBSDKCoreKit/FBSDKAccessToken.h>
#import <SatyaObjCLib/FBSDKCoreKit/FBSDKAppEvents.h>
#import <SatyaObjCLib/FBSDKCoreKit/FBSDKAppLinkUtility.h>
#import <SatyaObjCLib/FBSDKCoreKit/FBSDKApplicationDelegate.h>
#import <SatyaObjCLib/FBSDKCoreKit/FBSDKConstants.h>
#import <SatyaObjCLib/FBSDKCoreKit/FBSDKCopying.h>
#import <SatyaObjCLib/FBSDKCoreKit/FBSDKGraphRequest.h>
#import <SatyaObjCLib/FBSDKCoreKit/FBSDKGraphRequestConnection.h>
#import <SatyaObjCLib/FBSDKCoreKit/FBSDKMacros.h>
#import <SatyaObjCLib/FBSDKCoreKit/FBSDKMutableCopying.h>
#import <SatyaObjCLib/FBSDKCoreKit/FBSDKProfile.h>
#import <SatyaObjCLib/FBSDKCoreKit/FBSDKProfilePictureView.h>
#import <SatyaObjCLib/FBSDKCoreKit/FBSDKSettings.h>
#import <SatyaObjCLib/FBSDKCoreKit/FBSDKTestUsersManager.h>
#import <SatyaObjCLib/FBSDKCoreKit/FBSDKUtility.h>

#define FBSDK_VERSION_STRING @"4.1.0"
#define FBSDK_TARGET_PLATFORM_VERSION @"v2.3"
