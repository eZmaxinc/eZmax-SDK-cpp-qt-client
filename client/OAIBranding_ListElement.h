/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.2.0
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIBranding_ListElement.h
 *
 * A Branding List Element
 */

#ifndef OAIBranding_ListElement_H
#define OAIBranding_ListElement_H

#include <QJsonObject>

#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace Ezmaxapi {

class OAIBranding_ListElement : public OAIObject {
public:
    OAIBranding_ListElement();
    OAIBranding_ListElement(QString json);
    ~OAIBranding_ListElement() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getPkiBrandingId() const;
    void setPkiBrandingId(const qint32 &pki_branding_id);
    bool is_pki_branding_id_Set() const;
    bool is_pki_branding_id_Valid() const;

    QString getSBrandingDescriptionX() const;
    void setSBrandingDescriptionX(const QString &s_branding_description_x);
    bool is_s_branding_description_x_Set() const;
    bool is_s_branding_description_x_Valid() const;

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

    qint32 m_pki_branding_id;
    bool m_pki_branding_id_isSet;
    bool m_pki_branding_id_isValid;

    QString m_s_branding_description_x;
    bool m_s_branding_description_x_isSet;
    bool m_s_branding_description_x_isValid;

    qint32 m_i_branding_colortext;
    bool m_i_branding_colortext_isSet;
    bool m_i_branding_colortext_isValid;

    qint32 m_i_branding_colortextlinkbox;
    bool m_i_branding_colortextlinkbox_isSet;
    bool m_i_branding_colortextlinkbox_isValid;

    qint32 m_i_branding_colortextbutton;
    bool m_i_branding_colortextbutton_isSet;
    bool m_i_branding_colortextbutton_isValid;

    qint32 m_i_branding_colorbackground;
    bool m_i_branding_colorbackground_isSet;
    bool m_i_branding_colorbackground_isValid;

    qint32 m_i_branding_colorbackgroundbutton;
    bool m_i_branding_colorbackgroundbutton_isSet;
    bool m_i_branding_colorbackgroundbutton_isValid;

    qint32 m_i_branding_colorbackgroundsmallbox;
    bool m_i_branding_colorbackgroundsmallbox_isSet;
    bool m_i_branding_colorbackgroundsmallbox_isValid;

    bool m_b_branding_isactive;
    bool m_b_branding_isactive_isSet;
    bool m_b_branding_isactive_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::OAIBranding_ListElement)

#endif // OAIBranding_ListElement_H
