/**
 * eZmax API Definition
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.2
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIEzsigndocument_applyEzsigntemplate_v1_Request.h
 *
 * Request for the /1/object/ezsigndocument/{pkiEzsigndocumentID}/applyezsigntemplate API Request
 */

#ifndef OAIEzsigndocument_applyEzsigntemplate_v1_Request_H
#define OAIEzsigndocument_applyEzsigntemplate_v1_Request_H

#include <QJsonObject>

#include <QList>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIEzsigndocument_applyEzsigntemplate_v1_Request : public OAIObject {
public:
    OAIEzsigndocument_applyEzsigntemplate_v1_Request();
    OAIEzsigndocument_applyEzsigntemplate_v1_Request(QString json);
    ~OAIEzsigndocument_applyEzsigntemplate_v1_Request() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getFkiEzsigntemplateId() const;
    void setFkiEzsigntemplateId(const qint32 &fki_ezsigntemplate_id);
    bool is_fki_ezsigntemplate_id_Set() const;
    bool is_fki_ezsigntemplate_id_Valid() const;

    QList<QString> getASEzsigntemplatesigner() const;
    void setASEzsigntemplatesigner(const QList<QString> &a_s_ezsigntemplatesigner);
    bool is_a_s_ezsigntemplatesigner_Set() const;
    bool is_a_s_ezsigntemplatesigner_Valid() const;

    QList<qint32> getAPkiEzsignfoldersignerassociationId() const;
    void setAPkiEzsignfoldersignerassociationId(const QList<qint32> &a_pki_ezsignfoldersignerassociation_id);
    bool is_a_pki_ezsignfoldersignerassociation_id_Set() const;
    bool is_a_pki_ezsignfoldersignerassociation_id_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 fki_ezsigntemplate_id;
    bool m_fki_ezsigntemplate_id_isSet;
    bool m_fki_ezsigntemplate_id_isValid;

    QList<QString> a_s_ezsigntemplatesigner;
    bool m_a_s_ezsigntemplatesigner_isSet;
    bool m_a_s_ezsigntemplatesigner_isValid;

    QList<qint32> a_pki_ezsignfoldersignerassociation_id;
    bool m_a_pki_ezsignfoldersignerassociation_id_isSet;
    bool m_a_pki_ezsignfoldersignerassociation_id_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIEzsigndocument_applyEzsigntemplate_v1_Request)

#endif // OAIEzsigndocument_applyEzsigntemplate_v1_Request_H
