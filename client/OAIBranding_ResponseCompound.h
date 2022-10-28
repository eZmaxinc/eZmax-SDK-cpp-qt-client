/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.13
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIBranding_ResponseCompound.h
 *
 * A Branding Object
 */

#ifndef OAIBranding_ResponseCompound_H
#define OAIBranding_ResponseCompound_H

#include <QJsonObject>

#include "OAIBranding_Response.h"
#include "OAIBranding_ResponseCompound_allOf.h"
#include "OAIField_eBrandingLogo.h"
#include "OAIMultilingual_BrandingDescription.h"
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIMultilingual_BrandingDescription;

class OAIBranding_ResponseCompound : public OAIObject {
public:
    OAIBranding_ResponseCompound();
    OAIBranding_ResponseCompound(QString json);
    ~OAIBranding_ResponseCompound() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getPkiBrandingId() const;
    void setPkiBrandingId(const qint32 &pki_branding_id);
    bool is_pki_branding_id_Set() const;
    bool is_pki_branding_id_Valid() const;

    OAIMultilingual_BrandingDescription getObjBrandingDescription() const;
    void setObjBrandingDescription(const OAIMultilingual_BrandingDescription &obj_branding_description);
    bool is_obj_branding_description_Set() const;
    bool is_obj_branding_description_Valid() const;

    QString getSBrandingDescriptionX() const;
    void setSBrandingDescriptionX(const QString &s_branding_description_x);
    bool is_s_branding_description_x_Set() const;
    bool is_s_branding_description_x_Valid() const;

    OAIField_eBrandingLogo getEBrandingLogo() const;
    void setEBrandingLogo(const OAIField_eBrandingLogo &e_branding_logo);
    bool is_e_branding_logo_Set() const;
    bool is_e_branding_logo_Valid() const;

    qint32 getIBrandingColortext() const;
    void setIBrandingColortext(const qint32 &i_branding_colortext);
    bool is_i_branding_colortext_Set() const;
    bool is_i_branding_colortext_Valid() const;

    qint32 getIBrandingColortextlinkbox() const;
    void setIBrandingColortextlinkbox(const qint32 &i_branding_colortextlinkbox);
    bool is_i_branding_colortextlinkbox_Set() const;
    bool is_i_branding_colortextlinkbox_Valid() const;

    qint32 getIBrandingColortextbutton() const;
    void setIBrandingColortextbutton(const qint32 &i_branding_colortextbutton);
    bool is_i_branding_colortextbutton_Set() const;
    bool is_i_branding_colortextbutton_Valid() const;

    qint32 getIBrandingColorbackground() const;
    void setIBrandingColorbackground(const qint32 &i_branding_colorbackground);
    bool is_i_branding_colorbackground_Set() const;
    bool is_i_branding_colorbackground_Valid() const;

    qint32 getIBrandingColorbackgroundbutton() const;
    void setIBrandingColorbackgroundbutton(const qint32 &i_branding_colorbackgroundbutton);
    bool is_i_branding_colorbackgroundbutton_Set() const;
    bool is_i_branding_colorbackgroundbutton_Valid() const;

    qint32 getIBrandingColorbackgroundsmallbox() const;
    void setIBrandingColorbackgroundsmallbox(const qint32 &i_branding_colorbackgroundsmallbox);
    bool is_i_branding_colorbackgroundsmallbox_Set() const;
    bool is_i_branding_colorbackgroundsmallbox_Valid() const;

    bool isBBrandingIsactive() const;
    void setBBrandingIsactive(const bool &b_branding_isactive);
    bool is_b_branding_isactive_Set() const;
    bool is_b_branding_isactive_Valid() const;

    QString getSBrandingLogourl() const;
    void setSBrandingLogourl(const QString &s_branding_logourl);
    bool is_s_branding_logourl_Set() const;
    bool is_s_branding_logourl_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 pki_branding_id;
    bool m_pki_branding_id_isSet;
    bool m_pki_branding_id_isValid;

    OAIMultilingual_BrandingDescription obj_branding_description;
    bool m_obj_branding_description_isSet;
    bool m_obj_branding_description_isValid;

    QString s_branding_description_x;
    bool m_s_branding_description_x_isSet;
    bool m_s_branding_description_x_isValid;

    OAIField_eBrandingLogo e_branding_logo;
    bool m_e_branding_logo_isSet;
    bool m_e_branding_logo_isValid;

    qint32 i_branding_colortext;
    bool m_i_branding_colortext_isSet;
    bool m_i_branding_colortext_isValid;

    qint32 i_branding_colortextlinkbox;
    bool m_i_branding_colortextlinkbox_isSet;
    bool m_i_branding_colortextlinkbox_isValid;

    qint32 i_branding_colortextbutton;
    bool m_i_branding_colortextbutton_isSet;
    bool m_i_branding_colortextbutton_isValid;

    qint32 i_branding_colorbackground;
    bool m_i_branding_colorbackground_isSet;
    bool m_i_branding_colorbackground_isValid;

    qint32 i_branding_colorbackgroundbutton;
    bool m_i_branding_colorbackgroundbutton_isSet;
    bool m_i_branding_colorbackgroundbutton_isValid;

    qint32 i_branding_colorbackgroundsmallbox;
    bool m_i_branding_colorbackgroundsmallbox_isSet;
    bool m_i_branding_colorbackgroundsmallbox_isValid;

    bool b_branding_isactive;
    bool m_b_branding_isactive_isSet;
    bool m_b_branding_isactive_isValid;

    QString s_branding_logourl;
    bool m_s_branding_logourl_isSet;
    bool m_s_branding_logourl_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIBranding_ResponseCompound)

#endif // OAIBranding_ResponseCompound_H
