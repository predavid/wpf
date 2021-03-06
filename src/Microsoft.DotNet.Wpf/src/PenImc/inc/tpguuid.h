// Licensed to the .NET Foundation under one or more agreements.
// The .NET Foundation licenses this file to you under the MIT license.
// See the LICENSE file in the project root for more information.


#pragma once

// None of the interfaces should change but...

#define    TABLETMANAGERP_INTERFACE        uuid(663C73A5-8715-4499-B809-43689A93086B)
#define    TABLETP_INTERFACE               uuid(E65752FA-600B-43bd-8BFE-6A686FA3A201)
#define    TABLETCONTEXTP_INTERFACE        uuid(22F74D0A-694F-4f47-A5CE-AE08A6409AC8)
#define    TABLETCURSORP_INTERFACE         uuid(35DE0002-232C-4629-A915-7E600E80CD88)
#define    TABLETCURSORBUTTONP_INTERFACE   uuid(FCA502B0-5409-434d-8C35-A96C76CCA99C)
#define    TABLETEVENTSINKP_INTERFACE      uuid(287A9E67-8D1D-4a65-8DB4-51915395D019)
#define RECOPRIVATE_INTERFACE           uuid(D3BD1CEE-2BAC-4114-94AF-D1541B032046)
#define RECOGNIZERPRIVATE_INTERFACE     uuid(709AD3A5-7A2B-4edf-8939-D7BF6FF02327)
#define RECOMANAGER_INTERFACE           uuid(C2E8F101-5D03-42EE-B90A-352557831039)
#define USERLEXICONMANAGER_INTERFACE    uuid(1207B722-009D-495b-8C98-3A130F6DBE47)
#define    ALTERNATE_INTERFACE             uuid(A5055FC1-1A22-4F22-B306-76151BD53850)
#define    RECOASYNCRESULTS_INTERFACE      uuid(250CEF9C-121F-493d-ADCD-7A2A6823C0FD)
#define    RECOCONTEXT_INTERFACE           uuid(E6DAB875-75AF-4C8A-9665-2B6A44DD0F26)
#define    RECOGNIZER_INTERFACE            uuid(3A182AD6-596A-4070-A574-73941817B674)
#define    LATTICE_INTERFACE               uuid(946665F9-71E3-447B-A896-3359DA411532)
#define    RECOWORDLIST_INTERFACE          uuid(37ADC645-ACE6-4a31-B6A1-FD1F4EF48012)
#define CLASSIC_WISP_INTERFACE          uuid(663265C9-6B4D-428c-8266-8058D11C2691)
#define    INKOBJECT_INTERFACE             uuid(B9C4A0C1-16ED-4DC2-B34A-4E830326587E)
#define    INKSTROKE_INTERFACE             uuid(251F1257-1DCB-4AD0-A826-4F9E326fE490)
#define    INKPOINT_INTERFACE              uuid(3776F33D-6BF8-4ADD-9C7E-946AB4A7718D)
#define    INKCOLLECT_INTERFACE            uuid(E0ABA4C5-1726-4240-8E00-5EE31788A11B)
#define    RENDERINK_INTERFACE             uuid(538A9C7B-858A-4FF1-9769-62B6D74993D9)
#define    INKCLIPBOARD_INTERFACE          uuid(D499C1B0-9E97-4CC4-AE10-F8DCCCE1DE09)
#define    STROKESET_INTERFACE             uuid(2080FF4F-297F-4F66-AA83-CACA65F67216)
#define    DRAWATTRS_INTERFACE             uuid(051A0FA4-FCEE-4E18-BF46-89726728FB26)
#define    TRANSFORMINK_INTERFACE          uuid(8341F277-756B-433B-A78E-2221A2577339)
#define    STROKEGEOMETERY_INTERFACE       uuid(11F962C5-242E-4D4D-B205-0F3AB3562FDE)
#define    RENDERINGCONTEXT_INTERFACE      uuid(4E6B4F16-5A0C-4815-9AA2-DE231F5AAA26)
#define    INKSETTINGS_INTERFACE           uuid(A5558507-9B96-46BA-94ED-982E684A9A6B)
#define    TABLETEVENTSINK_INTERFACE       uuid(788459C8-26C8-4666-BF57-04AD3A0A5EB5)
#define    TABLETEVENTSINK_ASYNC     async_uuid(CDF7D7D6-2E5D-47c7-90FC-C638C7FA3FC4)
#define    TABLETMANAGER_INTERFACE         uuid(764DE8AA-1867-47C1-8F6A-122445ABD89A)
#define    TABLET_INTERFACE                uuid(1CB2EFC3-ABC7-4172-8FCB-3BC9CB93E29F)
#define    TABLET2_INTERFACE               uuid(C247F616-BBEB-406A-AED3-F75E656599AE)
#define    TABLETSETTINGS_INTERFACE        uuid(120ae7c9-36f7-4be6-93da-e5f266847b01)
#define    TABLETCONTEXT_INTERFACE         uuid(45AAAF04-9D6F-41AE-8ED1-ECD6D4B2F17F)
#define    TABLETCURSOR_INTERFACE          uuid(EF9953C6-B472-4B02-9D22-D0E247ADE0E8)
#define    TABLETCURSORBUTTON_INTERFACE    uuid(997A992E-8B6C-4945-BC17-A1EE563B3AB7)

//
// Classic WISP APIs.  These GUIDs are different between 1.0 and 2.0
//
#define    WISP_CLIENT_TYPELIB             uuid(D48CA453-5D1A-4BF9-B9BA-6CE8CB16F10A)
#define    TABLETMANAGER_CLASS             uuid(786CDB70-1628-44A0-853C-5D340A499137)
#define    CLASSIC_WISP_TYPELIB            uuid(DFD61F94-B7C7-4e15-8F27-0F2C9BCB420C)
#define    CLASSIC_WISP_CLASS              uuid(3336B8BF-45AF-429f-85CB-8C435FBF21E4)
#define    RECOCOM_TYPELIB                 uuid(9E52A566-D72F-4342-99B9-DBCA6780385F)
#define    RECOMANAGER_CLASS               uuid(DE815B00-9460-4F6E-9471-892ED2275EA5)
#define    USERLEXICONMANAGER_CLASS        uuid(176D323D-E591-4535-9A09-26F698E5AC5D)
#define    GENERICRECOGNIZER_CLASS         uuid(EFB4A0CB-A01F-451C-B6B7-56F02F77D76F)
#define    LATTICE_CLASS                   uuid(632A2D3D-86AF-411A-8654-7511B51B3D5F)
#define    RECOUSERDICT_CLASS              uuid(836FA1B6-1190-4005-B434-7ED921BE2026)
#define    TPCINK_TYPELIB                  uuid(194508A0-B8D1-473E-A9B6-851AAF726A6D)
#define    INKOBJECT_CLASS                 uuid(3EE60F5C-9BAD-4CD8-8E21-AD2D001D06EB)
#define    INKSETTINGS_CLASS               uuid(242025BB-8546-48B6-B9B0-F4406C54ACFC)
#define    DRAWATTRS_CLASS                 uuid(524B13ED-2E57-40B8-B801-5FA35122EB5C)
#define    INKSTROKE_CLASS                 uuid(4831CABD-F171-47F1-8D3C-0CBC8AFCB788)
#define    STROKESET_CLASS                 uuid(DC4D7DD2-97B1-4CD5-BD6E-E34DD57F767D)
#define    RENDERINGCONTEXT_CLASS          uuid(07081630-B202-4C48-B8B7-4F6C99B8CACE)
#define    TABLET_TYPELIB                  uuid(C3F76406-6CA5-4BCD-85E4-0E7F9E05D508)

