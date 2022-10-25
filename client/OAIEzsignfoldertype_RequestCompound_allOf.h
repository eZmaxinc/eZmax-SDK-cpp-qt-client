/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.11
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIEzsignfoldertype_RequestCompound_allOf.h
 *
 * 
 */

#ifndef OAIEzsignfoldertype_RequestCompound_allOf_H
#define OAIEzsignfoldertype_RequestCompound_allOf_H

#include <QJsonObject>

#include <QList>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIEzsignfoldertype_RequestCompound_allOf : public OAIObject {
public:
    OAIEzsignfoldertype_RequestCompound_allOf();
    OAIEzsignfoldertype_RequestCompound_allOf(QString json);
    ~OAIEzsignfoldertype_RequestCompound_allOf() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<qint32> getAFkiUserIdSigned() const;
    void setAFkiUserIdSigned(const QList<qint32> &a_fki_user_id_signed);
    bool is_a_fki_user_id_signed_Set() const;
    bool is_a_fki_user_id_signed_Valid() const;

    QList<qint32> getAFkiUserIdSummary() const;
    void setAFkiUserIdSummary(const QList<qint32> &a_fki_user_id_summary);
    bool is_a_fki_user_id_summary_Set() const;
    bool is_a_fki_user_id_summary_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<qint32> a_fki_user_id_signed;
    bool m_a_fki_user_id_signed_isSet;
    bool m_a_fki_user_id_signed_isValid;

    QList<qint32> a_fki_user_id_summary;
    bool m_a_fki_user_id_summary_isSet;
    bool m_a_fki_user_id_summary_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIEzsignfoldertype_RequestCompound_allOf)

#endif // OAIEzsignfoldertype_RequestCompound_allOf_H