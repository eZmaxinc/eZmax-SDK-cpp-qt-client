/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.8
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIEzsignfolder_importEzsigntemplatepackage_v1_Request.h
 *
 * Request for POST /1/object/ezsignfolder/{pkiEzsignfolderID}/importEzsigntemplatepackage
 */

#ifndef OAIEzsignfolder_importEzsigntemplatepackage_v1_Request_H
#define OAIEzsignfolder_importEzsigntemplatepackage_v1_Request_H

#include <QJsonObject>

#include "OAICustom_ImportEzsigntemplatepackageRelation_Request.h"
#include <QList>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAICustom_ImportEzsigntemplatepackageRelation_Request;

class OAIEzsignfolder_importEzsigntemplatepackage_v1_Request : public OAIObject {
public:
    OAIEzsignfolder_importEzsigntemplatepackage_v1_Request();
    OAIEzsignfolder_importEzsigntemplatepackage_v1_Request(QString json);
    ~OAIEzsignfolder_importEzsigntemplatepackage_v1_Request() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getFkiEzsigntemplatepackageId() const;
    void setFkiEzsigntemplatepackageId(const qint32 &fki_ezsigntemplatepackage_id);
    bool is_fki_ezsigntemplatepackage_id_Set() const;
    bool is_fki_ezsigntemplatepackage_id_Valid() const;

    QString getDtEzsigndocumentDuedate() const;
    void setDtEzsigndocumentDuedate(const QString &dt_ezsigndocument_duedate);
    bool is_dt_ezsigndocument_duedate_Set() const;
    bool is_dt_ezsigndocument_duedate_Valid() const;

    QList<OAICustom_ImportEzsigntemplatepackageRelation_Request> getAObjImportEzsigntemplatepackageRelation() const;
    void setAObjImportEzsigntemplatepackageRelation(const QList<OAICustom_ImportEzsigntemplatepackageRelation_Request> &a_obj_import_ezsigntemplatepackage_relation);
    bool is_a_obj_import_ezsigntemplatepackage_relation_Set() const;
    bool is_a_obj_import_ezsigntemplatepackage_relation_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 fki_ezsigntemplatepackage_id;
    bool m_fki_ezsigntemplatepackage_id_isSet;
    bool m_fki_ezsigntemplatepackage_id_isValid;

    QString dt_ezsigndocument_duedate;
    bool m_dt_ezsigndocument_duedate_isSet;
    bool m_dt_ezsigndocument_duedate_isValid;

    QList<OAICustom_ImportEzsigntemplatepackageRelation_Request> a_obj_import_ezsigntemplatepackage_relation;
    bool m_a_obj_import_ezsigntemplatepackage_relation_isSet;
    bool m_a_obj_import_ezsigntemplatepackage_relation_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIEzsignfolder_importEzsigntemplatepackage_v1_Request)

#endif // OAIEzsignfolder_importEzsigntemplatepackage_v1_Request_H
