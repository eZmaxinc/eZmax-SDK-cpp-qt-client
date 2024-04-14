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
 * Ezsignfoldertype_AutocompleteElement_Response.h
 *
 * A Ezsignfoldertype AutocompleteElement Response
 */

#ifndef Ezsignfoldertype_AutocompleteElement_Response_H
#define Ezsignfoldertype_AutocompleteElement_Response_H

#include <QJsonObject>

#include "Field_eEzsignfoldertypePrivacylevel.h"
#include <QString>

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {

class Ezsignfoldertype_AutocompleteElement_Response : public Object {
public:
    Ezsignfoldertype_AutocompleteElement_Response();
    Ezsignfoldertype_AutocompleteElement_Response(QString json);
    ~Ezsignfoldertype_AutocompleteElement_Response() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    Field_eEzsignfoldertypePrivacylevel getEEzsignfoldertypePrivacylevel() const;
    void setEEzsignfoldertypePrivacylevel(const Field_eEzsignfoldertypePrivacylevel &e_ezsignfoldertype_privacylevel);
    bool is_e_ezsignfoldertype_privacylevel_Set() const;
    bool is_e_ezsignfoldertype_privacylevel_Valid() const;

    QString getSEzsignfoldertypeNameX() const;
    void setSEzsignfoldertypeNameX(const QString &s_ezsignfoldertype_name_x);
    bool is_s_ezsignfoldertype_name_x_Set() const;
    bool is_s_ezsignfoldertype_name_x_Valid() const;

    qint32 getPkiEzsignfoldertypeId() const;
    void setPkiEzsignfoldertypeId(const qint32 &pki_ezsignfoldertype_id);
    bool is_pki_ezsignfoldertype_id_Set() const;
    bool is_pki_ezsignfoldertype_id_Valid() const;

    bool isBEzsignfoldertypeIsactive() const;
    void setBEzsignfoldertypeIsactive(const bool &b_ezsignfoldertype_isactive);
    bool is_b_ezsignfoldertype_isactive_Set() const;
    bool is_b_ezsignfoldertype_isactive_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    Field_eEzsignfoldertypePrivacylevel m_e_ezsignfoldertype_privacylevel;
    bool m_e_ezsignfoldertype_privacylevel_isSet;
    bool m_e_ezsignfoldertype_privacylevel_isValid;

    QString m_s_ezsignfoldertype_name_x;
    bool m_s_ezsignfoldertype_name_x_isSet;
    bool m_s_ezsignfoldertype_name_x_isValid;

    qint32 m_pki_ezsignfoldertype_id;
    bool m_pki_ezsignfoldertype_id_isSet;
    bool m_pki_ezsignfoldertype_id_isValid;

    bool m_b_ezsignfoldertype_isactive;
    bool m_b_ezsignfoldertype_isactive_isSet;
    bool m_b_ezsignfoldertype_isactive_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Ezsignfoldertype_AutocompleteElement_Response)

#endif // Ezsignfoldertype_AutocompleteElement_Response_H