/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.2.2
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * Ezsigndocument_applyEzsigntemplate_v2_Request.h
 *
 * Request for POST /2/object/ezsigndocument/{pkiEzsigndocumentID}/applyezsigntemplate
 */

#ifndef Ezsigndocument_applyEzsigntemplate_v2_Request_H
#define Ezsigndocument_applyEzsigntemplate_v2_Request_H

#include <QJsonObject>

#include <QList>
#include <QString>

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {

class Ezsigndocument_applyEzsigntemplate_v2_Request : public Object {
public:
    Ezsigndocument_applyEzsigntemplate_v2_Request();
    Ezsigndocument_applyEzsigntemplate_v2_Request(QString json);
    ~Ezsigndocument_applyEzsigntemplate_v2_Request() override;

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

    qint32 m_fki_ezsigntemplate_id;
    bool m_fki_ezsigntemplate_id_isSet;
    bool m_fki_ezsigntemplate_id_isValid;

    QList<QString> m_a_s_ezsigntemplatesigner;
    bool m_a_s_ezsigntemplatesigner_isSet;
    bool m_a_s_ezsigntemplatesigner_isValid;

    QList<qint32> m_a_pki_ezsignfoldersignerassociation_id;
    bool m_a_pki_ezsignfoldersignerassociation_id_isSet;
    bool m_a_pki_ezsignfoldersignerassociation_id_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Ezsigndocument_applyEzsigntemplate_v2_Request)

#endif // Ezsigndocument_applyEzsigntemplate_v2_Request_H
