<?php

class DB {

	private function getNodesByTIDS($tids) {

		$query = db_query('
			SELECT DISTINCT(entity_id)
			FROM field_data_field_service_line
			WHERE field_service_line_tid IN (:slt) && bundle = :bundle
			ORDER BY rand()
			LIMIT 8'
		, array(':slt' => $tids, ':bundle' => 'article'));

		$results = $query->fetchAll();

		$nids = array();
		if(!empty($results)) {
			foreach($results as $result) {
				$nids[] = $result->entity_id;
			}
		}

		return $nids;
	}

	public function getBookmarksByUID() {

		global $user;

		$query = db_query('
			SELECT DISTINCT(fsl.field_service_line_tid)
			FROM bookmark b
			LEFT JOIN field_data_field_service_line fsl ON fsl.entity_id = b.nid 
			WHERE b.uid = :uid'
		, array(':uid' => $user->uid));

		$results = $query->fetchAll();

		$tids = array();
		if(!empty($results)) {
			foreach($results as $result) {
				$tids[] = $result->field_service_line_tid;
			}

			$nids = $this->getNodesByTIDS($tids);
		}

		return $nids;
	}
}