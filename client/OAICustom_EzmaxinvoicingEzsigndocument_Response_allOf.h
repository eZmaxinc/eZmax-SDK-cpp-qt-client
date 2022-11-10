/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.16
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAICustom_EzmaxinvoicingEzsigndocument_Response_allOf.h
 *
 * 
 */

#ifndef OAICustom_EzmaxinvoicingEzsigndocument_Response_allOf_H
#define OAICustom_EzmaxinvoicingEzsigndocument_Response_allOf_H

#include <QJsonObject>

#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAICustom_EzmaxinvoicingEzsigndocument_Response_allOf : public OAIObject {
public:
    OAICustom_EzmaxinvoicingEzsigndocument_Response_allOf();
    OAICustom_EzmaxinvoicingEzsigndocument_Response_allOf(QString json);
    ~OAICustom_EzmaxinvoicingEzsigndocument_Response_allOf() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getFkiEzsignfolderId() const;
    void setFkiEzsignfolderId(const qint32 &fki_ezsignfolder_id);
    bool is_fki_ezsignfolder_id_Set() const;
    bool is_fki_ezsignfolder_id_Valid() const;

    QString getSName() const;
    void setSName(const QString &s_name);
    bool is_s_name_Set() const;
    bool is_s_name_Valid() const;

    QString getSEzsignfolderDescription() const;
    void setSEzsignfolderDescription(const QString &s_ezsignfolder_description);
    bool is_s_ezsignfolder_description_Set() const;
    bool is_s_ezsignfolder_description_Valid() const;

    QString getSEzsigndocumentName() const;
    void setSEzsigndocumentName(const QString &s_ezsigndocument_name);
    bool is_s_ezsigndocument_name_Set() const;
    bool is_s_ezsigndocument_name_Valid() const;

    bool isBEzsignfolderAllowed() const;
    void setBEzsignfolderAllowed(const bool &b_ezsignfolder_allowed);
    bool is_b_ezsignfolder_allowed_Set() const;
    bool is_b_ezsignfolder_allowed_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 fki_ezsignfolder_id;
    bool m_fki_ezsignfolder_id_isSet;
    bool m_fki_ezsignfolder_id_isValid;

    QString s_name;
    bool m_s_name_isSet;
    bool m_s_name_isValid;

    QString s_ezsignfolder_description;
    bool m_s_ezsignfolder_description_isSet;
    bool m_s_ezsignfolder_description_isValid;

    QString s_ezsigndocument_name;
    bool m_s_ezsigndocument_name_isSet;
    bool m_s_ezsigndocument_name_isValid;

    bool b_ezsignfolder_allowed;
    bool m_b_ezsignfolder_allowed_isSet;
    bool m_b_ezsignfolder_allowed_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAICustom_EzmaxinvoicingEzsigndocument_Response_allOf)

#endif // OAICustom_EzmaxinvoicingEzsigndocument_Response_allOf_H
