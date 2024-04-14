/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.2.1
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * Phonetype_AutocompleteElement_Response.h
 *
 * A Phonetype AutocompleteElement Response
 */

#ifndef Phonetype_AutocompleteElement_Response_H
#define Phonetype_AutocompleteElement_Response_H

#include <QJsonObject>

#include <QString>

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {

class Phonetype_AutocompleteElement_Response : public Object {
public:
    Phonetype_AutocompleteElement_Response();
    Phonetype_AutocompleteElement_Response(QString json);
    ~Phonetype_AutocompleteElement_Response() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getPkiPhonetypeId() const;
    void setPkiPhonetypeId(const qint32 &pki_phonetype_id);
    bool is_pki_phonetype_id_Set() const;
    bool is_pki_phonetype_id_Valid() const;

    QString getSPhonetypeNameX() const;
    void setSPhonetypeNameX(const QString &s_phonetype_name_x);
    bool is_s_phonetype_name_x_Set() const;
    bool is_s_phonetype_name_x_Valid() const;

    bool isBPhonetypeIsactive() const;
    void setBPhonetypeIsactive(const bool &b_phonetype_isactive);
    bool is_b_phonetype_isactive_Set() const;
    bool is_b_phonetype_isactive_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 m_pki_phonetype_id;
    bool m_pki_phonetype_id_isSet;
    bool m_pki_phonetype_id_isValid;

    QString m_s_phonetype_name_x;
    bool m_s_phonetype_name_x_isSet;
    bool m_s_phonetype_name_x_isValid;

    bool m_b_phonetype_isactive;
    bool m_b_phonetype_isactive_isSet;
    bool m_b_phonetype_isactive_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Phonetype_AutocompleteElement_Response)

#endif // Phonetype_AutocompleteElement_Response_H
