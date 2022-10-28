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
 * OAIBranding_Request.h
 *
 * A Branding Object
 */

#ifndef OAIBranding_Request_H
#define OAIBranding_Request_H

#include <QJsonObject>

#include "OAIField_eBrandingLogo.h"
#include "OAIMultilingual_BrandingDescription.h"
#include <QByteArray>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIMultilingual_BrandingDescription;

class OAIBranding_Request : public OAIObject {
public:
    OAIBranding_Request();
    OAIBranding_Request(QString json);
    ~OAIBranding_Request() override;

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

    OAIField_eBrandingLogo getEBrandingLogo() const;
    void setEBrandingLogo(const OAIField_eBrandingLogo &e_branding_logo);
    bool is_e_branding_logo_Set() const;
    bool is_e_branding_logo_Valid() const;

    QByteArray getSBrandingBase64() const;
    void setSBrandingBase64(const QByteArray &s_branding_base64);
    bool is_s_branding_base64_Set() const;
    bool is_s_branding_base64_Valid() const;

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

    OAIField_eBrandingLogo e_branding_logo;
    bool m_e_branding_logo_isSet;
    bool m_e_branding_logo_isValid;

    QByteArray s_branding_base64;
    bool m_s_branding_base64_isSet;
    bool m_s_branding_base64_isValid;

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
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIBranding_Request)

#endif // OAIBranding_Request_H
